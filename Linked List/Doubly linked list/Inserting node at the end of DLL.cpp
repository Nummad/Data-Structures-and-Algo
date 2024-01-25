#include<iostream>
using namespace std;
class List{
	public:
	int data;
	List * next;
	List * previous;
};
void push(List ** h,int newdata){
	List * newnode=new List;
	newnode->data=newdata;
	newnode->previous=NULL;
	newnode->next=(*h);
	if((*h)!=NULL)
	(*h)->previous=newnode;
	(*h)=newnode;
}
void insert(List ** h,int newdata){
	List * newnode=new List;
	List * last=* h;
	newnode->data=newdata;
	newnode->next=NULL;
	if((*h)== NULL){
	newnode->previous=NULL;
	* h=newnode;
	return;}
	while(last->next != NULL)
	last=last->next;
	last->next=newnode;
	newnode->previous=last;
	return;
}
void print(List * h){
	List * temp;
	cout<<"Forward traversal \n";
	while(h!=NULL){
		cout<<h->data<<"   ";
		temp=h;
		h=h->next;}
	cout<<"\nReverse traversal \n";
	while(temp!=NULL){
		cout<<temp->data<<"   ";
		temp=temp->previous;}
}
int main(){
/*	List * first=new List;
	List * second=new List;
	first->data=22;
	first->next=second;
	first->previous=NULL;
	second->data=4;
	second->next=NULL;
	second->previous=first;*/
	List * n=NULL;
	int x,y;
	cout<<"ENter total nodes : ";
	cin>>x;
	for(int i=1; i<=x; i++){
		cout<<"\nEnter values : ";
		cin>>y;
		push(&n,y);
	}
	cout<<"Original list is :\n";
	print(n);
	cout<<"\nList after insertion is :\n";
	insert(& n, 2003);
	print(n);
}