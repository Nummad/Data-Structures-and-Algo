// Write a program in C to count the digits of a given number using recursion.

#include<iostream>
using namespace std;
int count(long);
int main(){
	long a;
	cout<<"Enter number : ";
	cin>>a;
	cout<<"Digits in "<<a<<" are : "<<count(a);
}
int count(long x){
	static int counter=0;
	if(x==0)
	return 1;
	else{
		x=x/10;
		counter++;
		count(x);
	}
	return counter;
}