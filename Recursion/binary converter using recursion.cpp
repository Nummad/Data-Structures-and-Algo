// Write a program in C to convert a decimal number to binary using recursion.

#include<iostream>
using namespace std;
long convert(long);
int main(){
	long num;
	cout<<"Enter decimal number less than 1024 : ";
	cin>>num;
	cout<<"Binary equivalent of the number is : "<<convert(num);
}
long convert(long num){
	static long binary=0;
	if(num==0)
	return 1;
	else{
		static int x=1,y;
		y=num % 2;
		binary=binary + y*x;
		x=x*10;
		num/=2;
		convert(num);
	}
	return binary;
}