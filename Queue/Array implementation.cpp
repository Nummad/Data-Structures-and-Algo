#include<iostream>
using namespace std;
class queue{
	int Rear=-1,Front=0;
	int arr[5];
	public:	
	bool empty(){
		return (Rear < Front) ? 1 : 0;
	}
	bool full(){
		return (Rear==4) ? 1 : 0;
	}	
	void push(int val){
		if(!full()){
			arr[++Rear]=val;
		}
		else
		cout<<"\nFull\n";
	}
	void pop(){
		if(!empty())
			Front+=1;
		if(Front==Rear+1){
			Front=0;
			Rear=-1;
		}			
	}
	int front(){
		return arr[Front];
	}
	int rear(){
		return arr[Rear];
	}
	int size(){
		int total;
		for(int i=Front; i<=Rear; i++)
			total++;
		return total;	
	}
	void display(){
		for(int i=Front; i<=Rear; i++)
		cout<<arr[i]<<"  ";
	}
}q;
int main(){
	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4);
	q.push(5);
	q.display();
	q.pop();
	cout<<endl;
	q.display();
	q.pop();
	q.pop();
	q.pop();
	q.pop();
	q.display();
	q.push(8);
	cout<<endl;
	q.display();
	return 0;
}