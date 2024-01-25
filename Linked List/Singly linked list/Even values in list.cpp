#include<iostream>
using namespace std;
class list{
	public:
		int data;
		list *next;
}*h;
void add(list **h,int key){
	list *node=new list;
	node->data=key;
	node->next=(*h);
	(*h)=node;
}
void print(list *h){
	while(h!=NULL){
		cout<<h->data<<"   ";
		h=h->next;}
}
void even(list * h){
	while(h!=NULL){
		if(h->data%2==0)
		cout<<h->data<<"   ";
		h=h->next;
	}
}
int main(){
	int x,y;
	cout<<"Enter total nodes : ";
	cin>>x;
	for(int i=0; i<x; i++){
		cout<<"\nEnter values : ";
		cin>>y;
		add(&h,y);}
	cout<<"\nOriginal list is:\n";
	print(h);
	cout<<"\nEven nodes are :\n";
	even(h);	
}