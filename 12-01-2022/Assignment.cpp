// cross word program using trie tree data structure.

#include <iostream>
#include <bits/stdc++.h>
#include <string>

#define size 26

using namespace std;

//defining trie node structure
string output[30];
int counter = 0;
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

    if (length == 1 && temp->children[s[0] - 'a'] && temp->children[s[0] - 'a']->isEndOfWord)
    {
        // cout << "\t" << s << endl;
        output[counter++] = s;
        return s;
    }

    if (temp->isEndOfWord)
    {
        if (s.length() == length)
        {
            //cout << "\t" << s << endl;
            output[counter++] = s;
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

    string keys[] = {"a", "as", "at", "and", "axe", "around", "approximate", "assure", "ball", "boy", "bat", "box", "beat", "basket",
                     "cat", "call", "catch", "cover", "cofee", "copy", "candle", "cream", "dead", "dash", "does", "define",
                     "day", "dog", "dig", "date", "devloper", "elephant", "eat", "egg", "easy", "farm", "favour", "fish", "fat", "form", "fuzzy", "funny",
                     "great", "goat", "gathere", "goverment", "get", "glimpse", "gave", "guts", "gone", "hi", "hello", "hike", "hour", "hat",
                     "in", "ink", "india", "is", "ideal", "iterate", "if", "integer", "join", "jump", "jaguar", "joker", "jet", "just", "kilo",
                     "king", "kite", "keen", "knowledge", "kind", "kernel", "karate", "letter", "life", "lily", "listen", "lion",
                     "lie", "left", "leave", "let", "menu", "mouse", "my", "next", "new", "nothing", "ok", "online", "ox", "object", "over", "order", "overcome",
                     "pc", "private", "queen", "quit", "rose", "rib", "salute", "sir", "sit", "stable", "sustain", "success", "super", "superhero", "sad", "sun", "sunday",
                     "there", "then", "talk", "up", "umbrella", "very", "van", "wrose",
                     "wrap", "xerox", "yalk", "yes", "zygote", "zoo"};

    int n = sizeof(keys) / sizeof(keys[0]);

    struct TrieNode *root = getNode();

    // Construct a dictionary for crossword
    for (int i = 0; i < n; i++)
        insert(root, keys[i]);

    cout << "Enter First Letter of the Word  : ";
    cin >> ch;

    cout << "Enter length of the word : ";
    cin >> length;

    s += ch;

    search(root, length, s);
    if (counter != 0)
    {
        cout << "Suggested Words : " << endl;
        for (int i = 0; i < counter; i++)
        {
            cout << output[i] << endl;
        }
    }
    else
    {
        cout << "No word start with " << s << " and having length " << length << " is present!" << endl;
    }
    return 0;
}