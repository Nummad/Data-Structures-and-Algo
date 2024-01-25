#include<iostream>
#define SIZE 5
using namespace std;
class queue{
	int Rear=-1,Front=-1;
	int arr[SIZE];
	public:	
	bool empty(){
		return (Front==-1 && Rear==-1);
	}
	bool full(){
		return (((Rear+1) % SIZE) == Front);
	}	
	void push(int val){
		if(empty()){
			Front=0;
			Rear=0;
		}
		else if(full()){
			Front=(Front+1)%SIZE;
			Rear=(Rear+1)%SIZE;
		}
		else{
			Rear=(Rear+1)%SIZE;
		}
		arr[Rear]=val;
	}
	void pop(){
		if(empty())
			cout<<"Queue is empty\n";
		else if(Front == Rear){
			Front=-1;
			Rear=-1;
		}
		else{
			Front=(Front+1)%SIZE;
		}			
	}
	void display(){
	int i=Front;
		while(i!=Rear){
			cout<<arr[i]<<"  ";
			i=(i+1) % SIZE;
		}
		cout<<arr[Rear]<<endl;
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
	q.push(8);
	q.push(10);	
	q.display();			
	q.push(22);
	q.display();
	return 0;
}