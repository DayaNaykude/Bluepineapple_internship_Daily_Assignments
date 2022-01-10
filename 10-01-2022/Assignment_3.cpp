//Find total occurance of each digit (0-9) using function

#include <iostream>
#include<string.h>

using namespace std;

int calculate_occurance(int number){
	
	int count[10];
	
	for(int i=0;i<10;i++){
		count[i]=0;
	}
	
	while(number){
		int digit=number%10;
		++count[digit];
		number=number/10;
			
	}
	for(int i=0;i<10;i++){
		cout<<"the occurance of "<<i<<" in the given number is "<<count[i]<<" times"<<endl;
	}
	
}

int main(){
	
	int number;
	int count_container[10];
	
	cout<<"Enter the number : ";
	cin>>number;
	
	calculate_occurance(number);
	
	
}
