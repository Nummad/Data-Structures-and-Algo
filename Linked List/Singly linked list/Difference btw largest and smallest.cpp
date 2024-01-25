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
	node->next=*h;	
	*h=node;
}
void print(list *h){
	while(h!=NULL){
		cout<<h->data<<"   ";
		h=h->next;}
}
void diff(list *h){
	int min=h->data,max=h->data;
	while(h!=NULL){
		if(h->data > max)
		max=h->data;
		if(h->data < min)
		min=h->data;
		h=h->next;}
	cout<<"\nDifference is : "<<max-min;	
}
int main(){
	int x,y;
	cout<<"Enter total nodes : ";
	cin>>x;
	for(int i=0; i<x; i++){
		cout<<"\nEnter values : ";
		cin>>y;
		add(&h,y);}
	cout<<"\nList is :\n";
	print(h);
	diff(h);	
}