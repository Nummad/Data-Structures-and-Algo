#include<iostream>
#include<stack>
using namespace std;
void print(stack<int> s){
	if(s.empty()==true)
	return;
	int x=s.top();
	s.pop();
	print(s);
	cout<<x<<"   ";
}
int main(){
	stack<int> s;
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	s.push(5);
	cout<<"Stack in correct order is : ";
	print(s);
}