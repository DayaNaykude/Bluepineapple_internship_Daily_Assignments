/* Write a program to find frequency of particular word in paragraph */

#include <iostream>
#include <map>
#include <cstring>

using namespace std;

typedef map<string, int> wordFrequncy;

int main()
{
    int choice;

    char para[1000];
    string key, str, ch;

    wordFrequncy word;

    cout << "Enter a paragraph :" << endl;

    cin.getline(para, 1000);

    wordFrequncy ::iterator itr;

    for (int i = 0; i < strlen(para) + 1; i++)
    {
        if (para[i] == ' ' || para[i] == '\0')
        {
            key = ch;
            itr = word.find(key);

            if (itr != word.end())
                itr->second = ++(*itr).second;

            word.insert(pair<string, int>(key, 1));
            ch = "";
        }
        else
        {
            ch += para[i];
        }
    }

    // for (itr = word.begin(); itr != word.end(); itr++)
    // {
    //     cout << (*itr).first << " " << (*itr).second << endl;
    // }

    do
    {
        cout << "Enter the word for check his frequency : ";
        cin >> str;

        itr = word.find(str);

        if (itr != word.end())
            cout << "frequency of word " << str << " is " << (*itr).second << endl;
        else
        {
            cout << str << " is not present in the given paragraph"<<endl;
        }
        cout << "Do you want to check for another word(1/0)" << endl;
        cin >> choice;
    } while (choice == 1);

    return 0;
}