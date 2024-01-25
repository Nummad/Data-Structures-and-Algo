#include<iostream>
#include<queue>
using namespace std;
void del(queue<int> &q,int val){
	if(q.empty())
	return;
	int temp=q.front();
	q.pop();
	del(q,val);
	if(temp != val)
	q.push(temp);
}
int main(){
	queue<int> q;
	for(int i=0; i<5; i++)
	q.push(i);
	del(q,2);
	while(!q.empty()){
		cout<<q.front()<<"  ";
		q.pop();
	}
	return 0;}