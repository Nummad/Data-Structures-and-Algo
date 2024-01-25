#include<iostream>
#include<stack>
using namespace std;
void delmid(stack<int> & stack,int x,int y){
	int num;
	if(y==(x/2)){
		cout<<"Deleted value is : "<<stack.top()<<endl;
	stack.pop();
	return;}
	num=stack.top();
	stack.pop();
	delmid(stack,x,y+1);
	stack.push(num);
}
int main(){
	stack<int> s;
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	s.push(5);
	s.push(6);
	int size=s.size();
	delmid(s,size,0);
	cout<<"Stack after deleting : ";
	while(!s.empty()){
		cout<<s.top()<<"   ";
		s.pop();
	}
}