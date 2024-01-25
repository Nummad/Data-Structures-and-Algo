//Write a program in C++ to print first 50 natural numbers using recursion.

#include<iostream>
using namespace std;
int a=1;
void print(){
	if(a==51)
	return;
	else{
		cout<<a<<"\n";
		a++;
		print();
	}
}
int main(){
	print();
}