#include<iostream>
#include<stack>
using namespace std;
void pushatbottom(stack<int> &s,int x){
	if(s.empty()){
		s.push(x);
		return;
	}
	int num=s.top();
	s.pop();
	pushatbottom(s,x);
	s.push(num);	
}
int main(){
	stack<int> s;
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	s.push(5);
	pushatbottom(s,-1);
	while(!s.empty()){
		cout<<s.top()<<"   ";
		s.pop();}
}