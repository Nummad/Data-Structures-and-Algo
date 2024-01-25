#include<iostream>
using namespace std;
class list{
	public:
		int data;
		list * next;
}*h;
void push(int  val){
	list * newnode=new list;
	newnode->data=val;
	newnode->next=h;
	h=newnode;
}
void insertatstart(list *h,int val){
	list *newnode=new list;
	list * temp=h,*p=h;
	newnode->data=val;
	while(temp->next!=NULL){
		h=temp;
		temp=temp->next;
	}
	newnode->next=temp->next;
	temp->next=newnode;
}
void print(list * last){
	list * ptr=last;
	//ptr=last;
	while(ptr != NULL){
		cout<<ptr->data<<"   ";
		ptr=ptr->next;
	}
}
int main(){
	int x,y;
	cout<<"Enter total number of nodes : ";
	cin>>x;
	for(int i=1; i<=x; i++){
		cout<<"Enter value : ";
		cin>>y;
		push(y);
	}
	cout<<"Created list is : ";
	print(h);
	cout<<"\nEnter value you want to insert at start : ";
	cin>>y;
	insertatstart(h,y);
	cout<<"\nList after insertion is : ";
	print(h);
	return 0;
}