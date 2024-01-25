#include<iostream>
using namespace std;
class List{
	public:
		int data;
		List * next;
}*obj;
void InsertAfter(List * previous,int newdata){
	if(previous==NULL){
		cout<<"Previous node cannot be NULL "<<endl;
		return;}
	List * newnode=new List;
	newnode->data=newdata;
	newnode->next=previous->next;
	previous->next=newnode;
}
void push(int x){
	List * newnode=new List;
	newnode->data=x;
	newnode->next=obj;	
	obj=newnode;
}
void print(List * n){
	while(n!=NULL){
		cout<<n->data<<"   ";
		n=n->next;
	}
}
int main(){
	int x,y;
	List *temp;			
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
	InsertAfter(temp , x);
	cout<<"\nLinked list after insertion is :\n";
	print(obj);
	return 0;
}	