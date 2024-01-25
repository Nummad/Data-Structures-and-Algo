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
void insert(List * prev,int newdata){
	if(prev==NULL){
	cout<<"Previous node cannot be NULL\n";
	return;}
	List * newnode=new List;
	newnode->data=newdata;
	newnode->next=prev->next;
	prev->next=newnode;
	newnode->previous=prev;
	if(newnode->next != NULL)
	newnode->next->previous=newnode;
}
void print(List * h){
	cout<<"\nForward traversal\n";
	List *temp;
	while(h!=NULL){
		cout<<h->data<<"   ";
		temp=h;
		h=h->next;}
	cout<<"\nReverse traversal\n";
	while(temp!=NULL){
		cout<<temp->data<<"   ";
		temp=temp->previous;
	}	
}
int main(){
	List * h=NULL,*temp;
	int x,y;
	cout<<"Enter total elements : ";
	cin>>x;
	for(int i=1; i<=x; i++){
		cout<<"\nEnter elements : ";
		cin>>y;
		push(&h,y);}
	cout<<"Linked list before insertion is:\n";
	print(h);	
	temp=h;	
	cout<<"\nEnter node number after which you want to insert value : ";
	cin>>y;
	while(y>x){
		cout<<"\nEnter again : ";
		cin>>y;}
	cout<<"\nEnter number you want to insert : ";
	cin>>x;		
	for(int i=0; i<y-1; i++)
	h=h->next;	
/*	List * first=new List;
	List * second=new List;
	first->data=22;
	first->next=second;
	first->previous=NULL;
	second->data=4;
	second->next=NULL;
	second->previous=first;*/
	cout<<"\nLinked list after insertion of node after head is :\n";
	insert(h,x);
	print(temp);
}