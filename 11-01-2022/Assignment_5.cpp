//Write a program for book management system using map data structure.

#include <iostream>
#include <map>
#include <cstring>
using namespace std;

map<int, string> book;

void insertBook()
{
    int id;
    string name;

    //basic integer validation
    for (;;)
    {
        cout << "Enter the Id of Book : ";
        if (cin >> id)
        {
            break;
        }
        else
        {
            cout << "Please enter a valid integer id" << endl;
            cin.clear();
            cin.ignore(80, '\n');
        }
    }

    cout << "Enter the Name of Book : ";
    while ((getchar()) != '\n')
        ;
    getline(cin, name);

    book.insert({id, name});

    cout << "Book Inserted Successfully !" << endl;
}

void deleteBook()
{
    if (book.empty())
    {
        cout << "No Book Is present In Liabrary" << endl;
        return;
    }
    int idForDelete;

    for (;;)
    {
        cout << "Enter the Id of Book : ";
        if (cin >> idForDelete)
        {
            break;
        }
        else
        {
            cout << "Please enter a valid integer id" << endl;
            cin.clear();
            cin.ignore(80, '\n');
        }
    }

    book.erase(idForDelete);

    cout << "Book Deleted Successfully" << endl;
}
void dispalyBooks()
{
    if (book.empty())
    {
        cout << "No Book Is present In Liabrary" << endl;
        return;
    }
    cout << "Book List:" << endl;

    for (auto itr = book.begin(); itr != book.end(); itr++) //auto=map<int, string>::iterator
    {
        cout << "Book Id: " << (*itr).first << "  "
             << "Book Name: " << (*itr).second << endl;
    }
}
void searchBook()
{
    if (book.empty())
    {
        cout << "No Book Is present In Liabrary" << endl;
        return;
    }
    int searchId;
    for (;;)
    {
        cout << "Enter the Id of Book : ";
        if (cin >> searchId)
        {
            break;
        }
        else
        {
            cout << "Please enter a valid integer id" << endl;
            cin.clear();
            cin.ignore(80, '\n');
        }
    }

    map<int, string>::iterator itr;

    itr = book.find(searchId);

    cout << "Book Detail:" << endl;
    cout << (*itr).first << " " << (*itr).second << endl;
}

int main()
{
    int mainMenu;

    do
    {
        printf("-----------------Main Menu-------------------\n");
        printf("\n1. Insert Book\n2. Delete Book\n3. Display All Books\n4. Search Book\n5. Quit\n");

        for (;;)
        {
            cout << "Choose the Menu: ";
            if (cin >> mainMenu)
            {
                break;
            }
            else
            {
                cout << "Choose the appropriate menu" << endl;
                cin.clear();
                cin.ignore(80, '\n');
            }
        }
        switch (mainMenu)
        {
        case 1:
        {
            insertBook();
            break;
        }
        case 2:
        {
            deleteBook();
            break;
        }
        case 3:
        {
            dispalyBooks();
            break;
        }
        case 4:
        {
            searchBook();
            break;
        }
        case 5:
        {
            exit(0);
            break;
        }
        default:
        {
            cout << "Choose the appropriate menu !" << endl;
            mainMenu = 6;
        }
        }

    } while (mainMenu != 5);
}