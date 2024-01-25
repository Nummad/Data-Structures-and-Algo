#include<iostream>
using namespace std;
class List{
	public:
		int data;
		List * next;
		List * prev;
};
void push(List ** h,int newdata){
	List * newnode=new List;
	newnode->data=newdata;
	newnode->prev=NULL;
	newnode->next=(*h);
	if((*h) != NULL)
	(*h)->prev=newnode;
	(*h)=newnode;
}
void deletenode(List ** h, List * del){
	if(*h==NULL or del==NULL)
	return;
	if(*h==del)
	*h=del->next;
	if(del->next != NULL)
	del->next->prev=del->prev;
	if(del->prev != NULL)
	del->prev->next=del->next;
	free(del);
	return;
}
void print(List * h){
	List * temp;
	cout<<"\nForward traversal\n";
	while(h!=NULL){
		cout<<h->data<<"   ";
		temp=h;
		h=h->next;
	}
	cout<<"\nReverse traversal\n";
	while(temp!=NULL){
		cout<<temp->data<<"   ";
		temp=temp->prev;
	}
}
int main(){
	List * h=NULL;
	List *head=NULL;
	int x,y;
	cout<<"Enter total elements :\n";
	cin>>x;
	for(int i=1; i<=x; i++){
		cout<<"\nEnter elements :\n";
		cin>>y;
		push(&head,y);}
/*	List * first=new List;
	List * second=new List;
	List * third=new List;
	List * last=new List;	
	first->data=1;
	first->next=second;
	first->prev=NULL;
	second->data=2;
	second->prev=first;
	second->next=third;
	third->data=3;
	third->next=last;
	third->prev=second;
	last->data=4;
	last->next=NULL;
	last->prev=third;*/
	h=head;
	y=x;
	cout<<"Created linked list is:\n";
	print(h);	
	cout<<"\nEnter node number from left you want to delete : ";
	cin>>x;	
	while(x>y or x<1){
		cout<<"\nEnter again : ";
		cin>>x;}
	for(int i=0; i<x-1; i++){
		head=head->next;}
	deletenode(&h, head);
	cout<<"\nLinked list after deletion of "<<x<<" node is :\n";
	print(h);
}