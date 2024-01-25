#include<iostream>
using namespace std;
class list{
	public:
		int data;
		list * next;
}*obj;
void push(int x){
	list *newnode=new list;
	newnode->data=x;
	newnode->next=obj;
	obj=newnode;
}
void insert(list * previous,int x){
	if(previous == NULL){
		cout<<"Previous node cannot be null";
		return;
	}
	list *newnode=new list;
	newnode->data=x;
	newnode->next=previous->next;
	previous->next=newnode;
}
void insertatend(list ** head,int x){
	list *newnode=new list;
	list *last=*head;
	newnode->data=x;
	newnode->next=NULL;
	if(head==NULL){
		(*head)=newnode;
		return;
	}
	while(last->next!=NULL){
		last=last->next;
	}
	last->next=newnode;
	return;
}
void print(list *n){
	while(n!=NULL){
		cout<<n->data<<"  ";
		n=n->next;
	}
}
int main(){
	int x,y,z;
	cout<<"\n\n1-> Insertion at head\n2-> Insertion at specific position";
	cout<<"\n3-> Insertion at end";
	start:
	cout<<"\nEnter option : ";
	cin>>z;
	if(z==1){
	cout<<"Enter total number of nodes : ";
	cin>>x;
	while(x<1){
		cout<<"Enter again : ";
		cin>>x;
	}
	for(int i=0; i<x; i++){
		cout<<"\nEnter values : ";
		cin>>y;
		push(y);
	}
	cout<<"Created list is :\n";
	print(obj);
	cout<<"\nEnter number you want to insert at head : ";
	cin>>y;
	push(y);
	cout<<"\nList after insertion at head is :\n";
	print(obj);}
	else if(z==2){
	list *temp;			
	cout<<"Enter total number of nodes : ";
	cin>>x;
	for(int i=1; i<=x; i++){
		cout<<"\nEnter values : ";
		cin>>y;
		push(y);
	}
	cout<<"\nCreated linked list is :\n";
	print(obj);
	temp=obj;
	cout<<"\nEnter node number after which you want to insert value : ";
	cin>>y;
	while(y<0 || y>x){
		cout<<"\nEnter again : ";
		cin>>y;}
	for(int i=0; i<y-1; i++)
	temp=temp->next;
	cout<<"\nEnter value you want to insert : ";
	cin>>x;
	insert(temp , x);
	cout<<"\nLinked list after insertion is :\n";
	print(obj);		
	}
	else if(z==3){
	cout<<"Enter total number of nodes : ";
	cin>>x;
	while(x<1){
		cout<<"Enter again : ";
		cin>>x;
	}
	for(int i=0; i<x; i++){
		cout<<"\nEnter values : ";
		cin>>y;
		push(y);
	}
	cout<<"Created list is :\n";
	print(obj);
	cout<<"\nEnter number you want to insert at end : ";
	cin>>y;		
	insertatend(&obj,y);
	cout<<"\nList after insertion at end is :\n";
	print(obj);
	}
	else 
	goto start;
	return 0;
}