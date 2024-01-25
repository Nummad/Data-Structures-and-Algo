#include<iostream>
#define SIZE 5
using namespace std;
class queue{
	int rear=-1,front=-1;
	int arr[SIZE];
	public:
	bool empty(){
		return (rear==-1 && front==-1);
	}
	void push(int val){
		if(empty()){
			front=0;
			rear=0;
		}
		else if(rear>4){
			int i=0;
			while(i<5){
				arr[i]=arr[i+1];
				i+=1;
			}
			rear--;
		}
		arr[rear++]=val;
	}
	void pop(){
		if(empty())
			cout<<"Queue is empty\n";
		else if(front == rear){
			front=-1;
			rear=-1;
		}
		else{
			int i=0;
			while(i<5){
				arr[i]=arr[i+1];
				i+=1;
			}
			rear--;
		}
	}
	void display(){
		int i=front;
		while(i<rear){
			cout<<arr[i]<<"  ";
			i++;
		}
		cout<<endl;
	}
}q;
int main(){
	q.pop();
	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4);
	q.push(5);
	q.display();
	q.pop();
	q.display();
	q.push(9);
	q.display();
	q.push(21);
	q.display();
	return 0;
}