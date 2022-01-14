// write a program to count the number of digits in that number

#include <iostream>
#include <string.h>

using namespace std;

int countDigits(long int num)
{
	if (num == 0)
	{
		return 1;
	}

	int count_digits = 0;
	while (num)
	{

		count_digits++;
		num = num / 10;
	}
	return count_digits;
}

int main()
{
	int permission;

	do
	{
		long int number;

		//basic validation for integer
		for (;;)
		{
			cout << "Enter the Integer Number : ";
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

		cout << "The Integer " << number << " contains " << countDigits(number) << " digits !" << endl;

		cout << "Do You Want to check for another number(1/0)" << endl;
		cin >> permission;

	} while (permission == 1);

	return 0;
}
