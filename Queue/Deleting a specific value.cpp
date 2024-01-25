#include<iostream>
#include<queue>
using namespace std;
int main(){
	queue<int> q1,q2;
	q1.push(1);
	q1.push(2);
	q1.push(3);
	q1.push(4);
	q1.push(5);
	int temp;
	cout<<"Enter number you want to delete : ";
	cin>>temp;
	while(!q1.empty()){
		if(temp != q1.front())
			q2.push(q1.front());
		q1.pop();
	}
	cout<<"Queue after deleting "<<temp<<" is \n";
	while(!q2.empty()){
		cout<<q2.front()<<"  ";
		q2.pop();
	}
	return 0;
}