#include<iostream>
#include<stack>
using namespace std;
void sortedinsert(stack<int> &s,int x){
	if(s.empty() || s.top()>x){
		s.push(x);
		return;}
	int num=s.top();
	s.pop();
	sortedinsert(s,x);
	s.push(num);
}
void sort(stack<int> &s){
	if(s.empty()){
		return;
	}
	int num=s.top();
	s.pop();
	sort(s);
	sortedinsert(s,num);
}
int main(){
	stack<int> s;
	s.push(1);
	s.push(-2);
	s.push(30);
	s.push(-4);
	s.push(5);
	cout<<"Sorted stack is : ";
	sort(s);
	while(!s.empty()){
		cout<<s.top()<<"   ";
		s.pop();
	}	
}