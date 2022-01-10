//Write a program to print all perfect numbers between 1 to n

#include <iostream>
#include<string.h>

using namespace std;

int main(){
	
	int upperBound;
	
	cout<<"Enter the positive integer: ";
	cin>>upperBound;
	
	if(upperBound<0){
		cout<<"Number You enterd is not positive integer";
		exit(0);
	}
	
	cout<<"perfect Numbers between 1 to " <<upperBound <<" are:"<<endl;
	
	for(int i=1;i<=upperBound;i++){
		
		int sum=0;
		for(int j=1;j<i;j++){
			if(i%j==0){	
				sum+=j;
			}
			
		}
		if(sum==i){
			cout<<i<<endl;
		}
	}
	return 0;
}
