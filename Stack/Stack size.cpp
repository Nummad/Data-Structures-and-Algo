#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	stack<int> stack;
	stack.push(3); 
	stack.push(10);
	stack.push(90);
	stack.push(67);
	stack.push(22);
	int s=stack.size();
	cout<<"Stack size is : "<<s<<endl;
	cout<<"Stack data is : ";
	while(!stack.empty()){
		cout<<stack.top()<<"   ";
		stack.pop();
	}
}
