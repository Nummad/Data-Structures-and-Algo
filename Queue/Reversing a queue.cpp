#include<iostream>
#include<queue>
using namespace std;
void print(queue<int> q){
	if(q.empty())
	return;
	int temp=q.front();
	q.pop();
	print(q);
	cout<<temp<<"  ";
}
int main(){
	queue<int> q;
	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4);
	q.push(5);
	cout<<"Reversed queue is \n";
	print(q);
}