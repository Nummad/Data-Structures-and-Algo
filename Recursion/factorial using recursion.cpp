#include<iostream>
using namespace std;
int fact(int);
int main(){
	int num;
	cout<<"Enter number : ";
	cin>>num;
	while(num<0){
		cout<<"Enter again : ";
		cin>>num;
	}
	cout<<"Factorial is : "<<fact(num);
}
int fact(int a){
	if(a==0)
	return 1;
	else{
		return (a*fact(a-1));
	}
}