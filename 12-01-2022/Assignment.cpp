// cross word program using trie tree data structure.


#include <bits/stdc++.h>
#include <string>

#define size 26

using namespace std;

//defining trie node structure

struct TrieNode
{
    struct TrieNode *children[size];
    bool isEndOfWord;
};

// Returns new trie node with all NULL values
struct TrieNode *getNode(void)
{
    struct TrieNode *temp = new TrieNode;

    temp->isEndOfWord = false;

    for (int i = 0; i < size; i++)
        temp->children[i] = NULL;

    return temp;
}

//inserting a word
void insert(struct TrieNode *root, string str)
{
    struct TrieNode *temp = root;

    for (int i = 0; i < str.length(); i++)
    {
        int index = str[i] - 'a';
        if (!temp->children[index])
            temp->children[index] = getNode();

        temp = temp->children[index];
    }

    
    temp->isEndOfWord = true;
}

static int flag = 1;

string search(struct TrieNode *root, int length, string s)
{
    struct TrieNode *temp = root;

    if (length == 1 && temp->children[s[0] - 'a'])
    {
        cout << "\t" << s << endl;
        return s;
    }

    if (temp->isEndOfWord)
    {
        if (s.length() == length)
        {
            cout << "\t" << s << endl;
            return s;
        }
    }

    if (flag == 1)
    {
        int index = s[0] - 'a';
        if (!temp->children[index])
            return s;
        temp = temp->children[index];
        flag++;
    }

    string str = "";

    for (int i = 0; i < size; i++)
    {
        if (temp->children[i] != NULL)
        {
            char ch = i + 'a';
            //	cout<<"ch : "<<ch<<endl;
            str += ch;
            s += ch;

            if (str.length() > 1)
            {
                //	cout<<"str : "<<str<<endl;
                //	cout<<"s in if : "<<s<<endl;
                //	int j = s.length() - str.length();
                string str1;

                for (int i = 0; i < s.length() - 2; i++)
                {
                    str1 += s[i];
                }

                str1 += str[str.length() - 1];
                s = str1;

                //	cout<<"s after str : "<<s<<endl;
            }
            search(temp->children[i], length, s);
        }
    }
    
    return s;
}

int main()
{
    int length;
    char ch;
    string s = "";

    string keys[] = {"a", "as", "assure", "ball", "boy", "cat", "call",
                     "day", "dog", "dig", "elephant", "eat", "farm", "favour",
                     "great", "goat", "gathere", "hi", "hello", "hike", "hour",
                     "in", "ink", "india", "joker", "jet", "king", "kite", "keen",
                     "lion", "lie", "left", "menu", "next", "new", "ok", "online",
                     "pc", "private", "queen", "quit", "rose", "rib", "salute", "sir",
                     "there", "then", "talk", "up", "umbrella", "very", "van", "wrose",
                     "wrap", "xerox", "yalk", "yes", "zygote", "zoo"};

    int n = sizeof(keys) / sizeof(keys[0]);

    struct TrieNode *root = getNode();

    // Construct a dictionary for crossword
    for (int i = 0; i < n; i++)
        insert(root, keys[i]);

    cout << "Enter First Letter of the Word  : ";
    cin >> ch;

    cout << "Enter length of the  : ";
    cin >> length;

    s += ch;
    cout << "Suggested Words : " << endl;
    search(root, length, s);
    return 0;
}