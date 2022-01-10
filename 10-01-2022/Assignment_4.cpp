// Write a program to convert number into words

#include <iostream>
#include<string.h>

using namespace std;

string numberToWordsForTwoDigit(int n){
	string outputWord;
	int num;
	num=(n/10)*10;
	if(num>19){
		switch(num){
			case 20:{outputWord+="Twenty ";
				break;
			}
			case 30:{outputWord+="Thirty ";
				break;
			}
			case 40:{outputWord+="Forty ";
				break;
			}
			case 50:{outputWord+="Fifty ";
				break;
			}
			case 60:{outputWord+="Sixty ";
				break;
			}
			case 70:{outputWord+="Seventy ";
				break;
			}
			case 80:{outputWord+="eighty ";
				break;
			}
			case 90:{outputWord+="Ninty ";
				break;
			}		
			
		}
	}
	if(n>9 && n<20){
		switch(n){
			case 10:{outputWord+="Ten ";
				break;
			}
			case 11:{outputWord+="Eleven ";
				break;
			}
			case 12:{outputWord+="Twelve ";
				break;
			}
			case 13:{outputWord+="Thirteen ";
				break;
			}
			case 14:{outputWord+="Forteen ";
				break;
			}
			case 15:{outputWord+="Fifteen ";
				break;
			}
			case 16:{outputWord+="Sixteen ";
				break;
			}
			case 17:{outputWord+="Seventeen ";
				break;
			}
			case 18:{outputWord+="Eighteen ";
				break;
			}
			case 19:{outputWord+="Ninteen ";
				break;
			}
		}
		return outputWord;
	}
		switch(n%10){
			case 0:{outputWord+="Zero ";
					break;
				}
			case 1:{outputWord+="One ";
				break;
			}
			case 2:{outputWord+="Two ";
				break;
			}
			case 3:{outputWord+="Three ";
				break;
			}
			case 4:{outputWord+="Four ";
				break;
			}
			case 5:{outputWord+="Five ";
				break;
			}
			case 6:{outputWord+="Six ";
				break;
			}
			case 7:{outputWord+="Seven ";
				break;
			}
			case 8:{outputWord+="Eight ";
				break;
			}
			case 9:{outputWord+="Nine ";
				break;
			}
			
				
	}
	
	return outputWord;
		
}

string numberToWords(int n){
	string output;
	
	if(n<100){
		output=numberToWordsForTwoDigit(n);
	}
	
	//TODO:for three digit and onwards
	//output=numberToWordsForTwoDigit((n/100),"Hundred ")
	return output;
}

int main(){
	
	int permission;
	do
	{
		int n;
		
		cout<<"Enter the Number"<<endl;
		cin>>n;
		
		cout<<numberToWords(n)<<endl;
		
		cout<<"Do You Want to check for another number(1/0)"<<endl;
			cin>>permission;
		
		}
		while(permission==1);
		
		return 0;
}
