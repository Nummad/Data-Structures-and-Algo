#include<iostream>
#include<stack>
using namespace std;
int main(){
	stack<int> stack;
	stack.push(10);
	stack.push(200);
	stack.push(-3);
	stack.push(400);
	stack.push(5);						
	int max=stack.top();
	while(!stack.empty()){
		int a=stack.top();
		if(max<a)
		max=a;
		stack.pop();
	}
	cout<<"Max value is : "<<max;
}