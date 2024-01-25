#include<iostream>
using namespace std;
class list{
	public:
		int data;
		list *next;
}*h;
void add(list **h,int key){
	list *node=new list;
	node->data=key;
	node->next=(*h);
	(*h)=node;
}
void print(list *h){
	while(h!=NULL){
		cout<<h->data<<"   ";
		h=h->next;}
}
int evensum(list *h){
	int even=0;
	while(h!=NULL){
		if(h->data%2==0)
		even+=(h->data);
		h=h->next;}
	return even;
}
int oddsum(list *h){
	int odd=0;
	while(h!=NULL){
		if(h->data%2!=0)
		odd+=(h->data);
		h=h->next;}
	return odd;	
}
int main(){
	int x,y;
	cout<<"Enter total nodes : ";
	cin>>x;
	for(int i=0; i<x; i++){
		cout<<"\nEnter values : ";
		cin>>y;
		add(&h,y);}
	cout<<"\nList is :\n";
	print(h);
	cout<<"\nSum of odd nodes : "<<oddsum(h);
	cout<<"\nSum of even nodes : "<<evensum(h);	
}