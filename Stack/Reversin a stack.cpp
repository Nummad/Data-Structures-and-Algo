#include<iostream>
#include<stack>
using namespace std;
void insertatbottom(stack<int> &s,int x){
	if(s.empty()){
		s.push(x);
		return;
	}
	int num=s.top();
	s.pop();
	insertatbottom(s,x);
	s.push(num);
}
void rev(stack<int> &s){
	if(s.empty()){
		return;	
	}
	int val=s.top();
	s.pop();
	rev(s);				//123   //12   //1    //  
	insertatbottom(s,val);
}
int main(){
	stack<int> s;
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	cout<<"Reversed stack is : ";
//	rev(s);
	while(!s.empty()){
		cout<<s.top()<<"   ";
		s.pop();
	}	
}