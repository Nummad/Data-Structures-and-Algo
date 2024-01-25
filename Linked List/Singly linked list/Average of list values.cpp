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
float ave(list *h){
	float a=0,sum=0;
	while(h!=NULL){
		sum+=h->data;
		a++;
		h=h->next;}
	a=sum/a;
	return a;
}
int main(){
	int x,y;
	cout<<"ENetr total nodes : ";
	cin>>x;
	for(int i=0; i<x; i++){
		cout<<"\nEnter values : ";
		cin>>y;
		add(&h,y);}
	cout<<"\nList is :\n";
	print(h);
	cout<<"\nAverage is : "<<ave(h);	
}