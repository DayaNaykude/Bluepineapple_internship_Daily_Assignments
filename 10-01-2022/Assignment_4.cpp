// Write a program to convert number into words.(indian counting system)

#include <iostream>
#include <string.h>

using namespace std;
const string oneToNinteen[] = {"", "One ", "Two ", "Three ", "Four ", "Five ", "Six ", "Seven ", "Eight ",
							   "Nine ", "Ten ", "Eleven ", "Twelve ", "Thirteen ", "Fourteen ", "Fifteen ",
							   "Sixteen ", "Seventeen ", "Eighteen ", "Ninteen "};

const string Tens[] = {"", "", "Twenty ", "Thirty ", "Forty ", "Fifty ", "Sixty ", "Seventy ", "Eighty ", "Ninty "};

string oneTwoDigit(int n, string outputWord)
{

	if (n == 0)
	{
		return "";
	}

	if (n > 19)
	{
		return Tens[n / 10] + oneToNinteen[n % 10] + outputWord;
	}
	else
	{
		return oneToNinteen[n] + outputWord;
	}
}

string numberToWords(long long int n)
{
	string finalOutput;

	finalOutput = oneTwoDigit((n % 100), "");

	finalOutput = oneTwoDigit((n / 100) % 10, "Hundred ") + finalOutput;
	finalOutput = oneTwoDigit((n / 1000) % 100, "Thousand ") + finalOutput;
	finalOutput = oneTwoDigit((n / 100000) % 100, "Lakh ") + finalOutput;
	finalOutput = oneTwoDigit((n / 10000000) % 100, "Crore ") + finalOutput;

	if (n / 1000000000 >= 1)
	{
		finalOutput = numberToWords(n / 1000000000) + "Arab " + finalOutput;
	}

	//finalOutput = oneTwoDigit((n / 1000000000) % 100, "Arab ") + finalOutput;

	return finalOutput;
}

int main()
{

	int permission;
	do
	{
		long long int n;

	input:
		cout << "Enter the Number: " << endl;
		cin >> n;

		cout << endl
			 << numberToWords(n) << endl
			 << endl;

		cout << "Do You Want to check for another number(1/0)" << endl;
		cin >> permission;

	} while (permission == 1);

	return 0;
}
