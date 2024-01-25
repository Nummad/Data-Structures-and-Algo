#include<bits/stdc++.h>
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
	for(int i=1; i<5; i++)
	q.push(i);
	stack<int> s;
	s.push(22);
	while(!q.empty()){
		s.push(q.front());
		q.pop();}
	while(!s.empty()){
		q.push(s.top());
		s.pop();}
	cout<<"Queue after inseting 22 is :\n";
	print(q);
	return 0;
} 