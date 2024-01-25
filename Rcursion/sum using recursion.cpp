// Write a program in C to calculate the sum of numbers from 1 to n using recursion.

#include<iostream>
using namespace std;
int sum(int c);
int main(){
int num;
cout<<"Enter total number of terms : ";
cin>>num;
while(num<=0){
	cout<<"Enter total number of terms again : ";
	cin>>num;
}
cout<<"Sum to "<<num<<" is : "<<sum(num);	
}
int sum(int c){
	if(c==1)
	return 1;
	else{
		return (c+sum(c-1));
	}
}