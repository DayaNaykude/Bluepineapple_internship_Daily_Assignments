// write a program to count the number of digits in that number

#include <iostream>
#include <string.h>

using namespace std;

int main()
{
	int permission;

	do
	{
		int number;
		int count_digits = 0;

		cout << "Enter the Integer Number!" << endl;
		cin >> number;

		int num = number;
		while (num)
		{

			count_digits++;
			num = num / 10;
		}
		cout << "The Integer " << number << " contains " << count_digits << " digits !" << endl;

		cout << "Do You Want to check for another number(1/0)" << endl;
		cin >> permission;

	} while (permission == 1);

	return 0;
}
