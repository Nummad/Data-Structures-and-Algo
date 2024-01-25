#include<iostream>
using namespace std;
class List{
	public:
	int data;
	List * next;
	List * previous;
}*obj;
void insertatstart(List ** h,int newdata){
	List * newnode=new List;
	newnode->data=newdata;
	newnode->next=(*h);
	newnode->previous=NULL;
	if((*h)!=NULL)
	(*h)->previous=newnode;
	(*h)=newnode;
}
void insertafter(List * prev,int newdata){
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
void insertatend(List ** h,int newdata){
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
void deletenode(List ** h, List * del){
	if(*h==NULL or del==NULL)
	return;
	if(*h==del)
	*h=del->next;
	if(del->next != NULL)
	del->next->previous=del->previous;
	if(del->previous != NULL)
	del->previous->next=del->next;
	free(del);
	return;
}
void print(List * h){
	while(h!=NULL){
		cout<<h->data<<"   ";
		h=h->next;}
}
int main(){
	int x,y,z;
	cout<<"\n\n1-> Insertion at start\n\n2-> Insertion after a node\n\n3-> Insertion at end\n\n";
	cout<<"4-> Delete first node\n\n5-> Delete last node\n\n6-> Delete middle node\n\n";
	cout<<"Enter option : ";
	cin>>z;
	cout<<"Enter total number of nodes : ";
	cin>>x;
	for(int i=1; i<=x; i++){
	cout<<"\nEnter values : ";
	cin>>y;
	insertatstart(&obj,y);}
	if(z==1){
	cout<<"\nEnter number you want to insert : ";
	cin>>x;
	cout<<"\nList before insertion is :\n";
	print(obj);
	cout<<"\nList after insertion is :\n";
	insertatstart(& obj, x);
	print(obj);}
	else if(z==2){
	List *temp;
	cout<<"Linked list before insertion is:\n";
	print(obj);	
	temp=obj;	
	cout<<"\nEnter node number after which you want to insert value : ";
	cin>>y;
	while(y>x || y<1){
	cout<<"\nEnter again : ";
	cin>>y;}
	cout<<"\nEnter number you want to insert : ";
	cin>>x;		
	for(int i=0; i<y-1; i++)
	obj=obj->next;	
	cout<<"\nLinked list after insertion of node is :\n";
	insertafter(obj,x);
	print(temp);}
	else if(z==3){
	cout<<"Original list is :\n";
	print(obj);
	cout<<"\nEnter number you want to insert at end : ";
	cin>>y;
	cout<<"\nList after insertion is :\n";
	insertatend(& obj, y);
	print(obj);}
	else if(z==4){
	cout<<"\nList before deletion is : \n";
	print(obj);
	cout<<"\nList after deletion of first node is :\n";
	List *temp=obj;
	deletenode(&obj, temp);
	print(obj);}
	else if(z==6){	
	cout<<"\nList before deletion is : \n";
	print(obj);
	cout<<"\nEnter node number you want to delete : ";
	cin>>y;
	while(y>x || y<1){
	cout<<"Enter again : ";
	cin>>y;}
	List *temp=obj;
	for(int i=0; i<y-1; i++)
	temp=temp->next;
	cout<<"\nList after deletion of specified node is :\n";
	deletenode(&obj, temp);
	print(obj);}
	else if(z==5){
	cout<<"\nList before deletions is :\n";
	print(obj);
	List *temp=obj;	
	for(int i=0; i<y-1; i++)
	temp=temp->next;
	deletenode(&obj,temp);
	cout<<"\nList after deletion of last node is :\n";
	print(obj);}
}