#include<iostream>
using namespace std;
class List{
	public:
	int data;
	List * next;
	List * prev;
};
void add(List ** h, int value){
	List * temp=new List;
	temp->data=value;
	temp->next=*h;
	if(*h != NULL)
	(*h)->prev=temp;
	(*h)=temp;
}
void print(List * h){
	while(h!=NULL){
		cout<<h->data<<"   ";
		h=h->next;}	
}
bool search(List ** h,int key){
	List * temp=* h;
	while(temp->data != key && temp->next != NULL){
		temp=temp->next;}
	if(temp->data != key)
	return 0;
	return 1;
}
int main(){
	List * head=NULL;
	int x,y;
	cout<<"Enter total elements :\n";
	cin>>x;
	for(int i=1; i<=x; i++){
		cout<<"\nEnter elements :\n";
		cin>>y;
		add(& head, y);}
	cout<<"\nCreated list is :\n";
	print(head);
	cout<<"\nEnter number to search :\n";
	cin>>x;
	(search(& head, x)==1) ? cout<<"Value found" : cout<<"Value not found";
}