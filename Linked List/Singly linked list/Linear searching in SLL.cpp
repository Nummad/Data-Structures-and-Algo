#include<iostream>
using namespace std;
class List{
	public:
		int data;
		List * next;
}*h;
bool search(List * h,int key){
	List * current=h;
	while(current!=NULL){
		if(current->data==key)
		return true;
		current=current->next;}
	return false;
}
void push(int x){
	List * newnode=(List*)malloc(sizeof(List));
	newnode->data=x;
	newnode->next=h;
	h=newnode;
}
void print(List * h){
	while(h!=NULL){
		cout<<h->data<<"   ";
		h=h->next;}
}
int main(){
	int x,y;
	cout<<"Enter total elements : ";
	cin>>x;
	for(int i=1; i<=x; i++){
		cout<<"\nEnter elements :\n";
		cin>>y;
		push(y);}
	cout<<"\nCreated linked list is :\n";
	print(h);
	cout<<"\nEnter value to search ";
	cin>>x;
	(search(h,x)==1) ? cout<<"Value found" : cout<<"Value not found"; 
	return 0;    
}