//Find total occurance of each digit (0-9) using function

#include <iostream>
#include <string.h>

using namespace std;

void calculate_occurance(long int number)
{

	int count[10];

	for (int i = 0; i < 10; i++)
	{
		count[i] = 0;
	}

	if (number == 0)
	{
		count[0] = 1;
	}

	while (number)
	{
		int digit = number % 10;
		++count[digit];
		number = number / 10;
	}
	for (int i = 0; i < 10; i++)
	{
		cout << "the occurance of " << i << " in the " << number << " is " << count[i] << " times" << endl;
	}
}

int main()
{
	int choice;
	do
	{
		long int number;

		for (;;)
		{
			cout << "Enter the Integer : ";

			if (cin >> number)
			{

				break;
			}
			else
			{
				cout << "Please enter a valid integer " << endl;
				cin.clear();
				cin.ignore(80, '\n');
			}
		}

		calculate_occurance(number); //function call

		for (;;)
		{
			cout << "Do you want to continue(1/0) : ";

			if (cin >> choice)
			{

				break;
			}
			else
			{
				cout << "Please enter a valid integer " << endl;
				cin.clear();
				cin.ignore(80, '\n');
			}
		}

	} while (choice != 0);
}
