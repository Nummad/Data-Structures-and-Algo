#include<iostream>
using namespace std;
class list{
	public:
		int data;
		list *next;
}*h;
void add(int key){
	list * node=new list;
	node->data=key;
	node->next=h;
	h=node;
}
int count(list *node,int x){
	list * n=node;
	int count=0;
	while(n!=NULL){
		if(n->data==x)
		count++;
		n=n->next;
	}
	return count;
}
int main(){
	int x,y;
	cout<<"Enter total nodes : ";
	cin>>x;
	for(int i=0; i<x; i++){
		cout<<"\nEnter values : ";
		cin>>y;
		add(y);}
	cout<<"\nEnter number you want to check : ";
	cin>>y;
	cout<<"Frequency of "<<y<<" is "<<count(h,y);	
}