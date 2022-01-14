//Write a program to print all perfect numbers between 1 to n

#include <iostream>
#include <string.h>

using namespace std;

void perfectNumbers(int upperBound)
{
	if (upperBound < 6)
	{
		cout << "No perfect Number upto: " << upperBound << endl;
		return;
	}
	for (int i = 1; i <= upperBound; i++)
	{

		int sum = 0;
		for (int j = 1; j < i; j++)
		{
			if (i % j == 0)
			{
				sum += j;
			}
		}
		if (sum == i)
		{
			cout << i << endl;
		}
	}
}
int main()
{
	int choice = 0;
	do
	{
		int upperBound;

	start:
		for (;;)
		{
			cout << "Enter the  positive Integer Number  : ";

			if (cin >> upperBound)
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

		if (upperBound < 1)
		{
			cout << "Number You enterd is not positive integer" << endl;
			goto start;
		}

		cout << "perfect Numbers upto " << upperBound << " are:" << endl;
		perfectNumbers(upperBound);
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

	return 0;
}
