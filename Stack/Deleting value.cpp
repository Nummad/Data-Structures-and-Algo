#include<iostream>
#include<stack>
using namespace std;
int main(){
	stack<int> stack;
	stack.push(1);
	stack.push(2);
	stack.push(3);
	stack.push(4);
	stack.push(5);
	int s=stack.size();
	cout<<"Stack size is : "<<s<<endl;
	stack.pop();
	s=stack.size();
	cout<<"Stack size after removal is : "<<s;
	
}