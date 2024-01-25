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
int main(){
	int x,y;
	list * temp=NULL;
	cout<<"Enter total nodes : ";
	cin>>x;
	for(int i=0; i<x; i++){
		cout<<"\nEnter values : ";
		cin>>y;
		add(y);}
	temp=h;	
	cout<<"\nMid of list is :\n";
	if(x%2==0){
		for(int i=0; i<((x/2)-1); i++){
			h=h->next;}
			cout<<h->data<<" and ";
			h=h->next;
			cout<<h->data;		
	}
	else{
		for(int i=0; i<(x/2); i++){
			h=h->next;}
			cout<<h->data;
	}
}