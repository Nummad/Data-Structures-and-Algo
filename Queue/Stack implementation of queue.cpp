#include<bits/stdc++.h>
using namespace std;
class queue{
	stack<int> s;
	public:
		void enqueue(int val){
			s.push(val);
		}
		bool isempty(){
			return (s.empty()) ? 1 : 0;
		}
		int dequeue(){
			if(s.empty())
			return 0;
			int x=s.top();
			s.pop();
			if(isempty())
				return x;				
			int y=dequeue();
			s.push(x);
			return y;
		}
}q;
int main(){
	q.enqueue(1);
	q.enqueue(2);
	q.enqueue(3);
	q.enqueue(4);
	while(!q.isempty()){
		cout<<q.dequeue()<<"  ";
	}
	return 0;
}