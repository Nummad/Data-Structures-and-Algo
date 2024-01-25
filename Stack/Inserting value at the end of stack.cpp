#include<iostream>
#include<stack>
using namespace std;
int main(){
	stack<int> s1;
	stack<int> s2;
	s1.push(1);
	s1.push(2);
	s1.push(3);
	s1.push(4);
	s1.push(5);
	while(!s1.empty()){
		int x=s1.top();
		s2.push(x);
		s1.pop();
	}
	s1.push(-1);
	while(!s2.empty()){
		int x=s2.top();
		s1.push(x);
		s2.pop();
	}
	while(!s1.empty()){
		cout<<s1.top()<<"   ";
		s1.pop();
	}
}