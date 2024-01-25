#include<iostream>
using namespace std;
class list{
	public:
		int data;
		list * next;
}*h;
void add(int val){
	list *newnode=new list;
	newnode->data=val;
	newnode->next=h;
	h=newnode;
}
void print(list *n){
	while(n){
		cout<<n->data<<"  ";
		n=n->next;}	
}
bool loop(list *n){
	list *slow=n;
	list *fast=n;
	while((slow!=NULL) && (fast!=NULL) && (fast->next!=NULL)){
		slow=slow->next;
		fast=fast->next->next;
		if(slow == fast)
		return true;
	}
	return false;
}
int main(){
	int x,y; 
	cout<<"Enter total nodes : ";
	cin>>x;
	for(int i=0; i<x; i++){
		cout<<"\nEnter values : ";
		cin>>y;
		add(y);
	}
	cout<<"\nList is :\n";
	print(h);
	h->next->next=h;
	(loop(h)) ? cout<<"\nLoop found " : cout<<"\nNo loop";
}