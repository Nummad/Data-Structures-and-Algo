//  Write a program in C to find the sum of digits of a number using recursion.

#include<iostream>
using namespace std;
int sum(int);
int main(){
	int a;
	cout<<"Enter a number : ";
	cin>>a;
	while(a<=0){
		cout<<"Enter again : ";
		cin>>a;
	}
	cout<<"Sum of the digits is : "<<sum(a);
}
int sum(int a){
	static int total=0;
	if(a==0)
	return 1;
	else{
		int x=a%10;
		a/=10;
		total+=x;
		sum(a);
	}
	return total;
}