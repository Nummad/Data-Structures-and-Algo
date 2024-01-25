#include<iostream>
using namespace std;
class List{
	public:
		int data;
		List * next;
}*obj;
void add(int x){
	List * newnode=new List;
	newnode->data=x;
	newnode->next=obj;
	obj=newnode;
}																					
void print(List * node){
	while(node!=NULL){
		cout<<node->data<<"   ";
		node=node->next;}
}
int main(){
	int x,y;
	cout<<"Enter total number of nodes : ";
	cin>>x;
	for(int i=1; i<=x; i++){
		cout<<"\nEnter values : ";
		cin>>y;
		add(y);}
	cout<<"\nCreated linked list is :\n";
	print(obj);
	cout<<"\nEnter value you want to insert : ";
	cin>>x;
	cout<<"\nLinked list after insertion is :\n";
	add(x);
	print(obj);
}
