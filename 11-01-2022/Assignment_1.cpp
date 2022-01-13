//Write a program to check whether the given string is palindrom or not

#include <iostream>
#include<string.h>

using namespace std;

char isPalindrome(char string[]){
	int length=strlen(string);
	
	for(int i=0;i<length/2;i++){
		if(string[i]!=string[length-1-i])
			return false;
	}
	return true;
}

int main(){
	char inputString[20];
	int choice=0;
	do
	{
		cout<<"Enter the String : ";
		cin>>inputString;
		
		if(isPalindrome(inputString)){
			cout<<endl<<inputString<<" is palindrom string"<<endl;
		}
		else{
			cout<<endl<<inputString<<" is not palindrom string"<<endl;
		}
		
		cout<<endl<<"Do You Want to check for another string(1/0)"<<endl;
		cin>>choice;
	}
	while(choice==1);
}
