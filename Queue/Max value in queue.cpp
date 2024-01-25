#include<iostream>
#include<queue>
using namespace std;
int main(){
	queue<int> q;
	q.push(1);
	q.push(2);
	q.push(22);
	q.push(4);
	q.push(5);
	int max=q.front();
	q.pop();
	while(!q.empty()){
		if(max<q.front())
		max=q.front();
	q.pop();}
	cout<<"Max value is : "<<max;
}