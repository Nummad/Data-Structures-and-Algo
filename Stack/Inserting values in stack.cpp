#include<iostream>
#include<stack>   //or #include<bits/stdc++.h>
using namespace std;
int main(){
	stack<float> a;
	a.push(1);
	a.push(2);
	a.push(3);
	a.push(4);
	a.push(5);
	while(!a.empty()){	         
	cout<<"Value is "<<a.top()<<endl;
	a.pop();}
}