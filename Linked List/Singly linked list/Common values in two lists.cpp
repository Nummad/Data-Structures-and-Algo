#include<iostream>
using namespace std;
class list{
	public:
		int data;
		list *next;
}*h1,*h2;
void add(list **h,int key){
	list *node=new list;
	node->data=key;
	node->next=(*h);
	(*h)=node;
}
void common(list *obj1,list *obj2){
	list *a=obj1,*b=obj2;
		while(a!=NULL){
			b=obj2;
			while(b!=NULL){
		if((a->data) == (b->data)){
		cout<<b->data<<"  ";}
		b=b->next;}
		a=a->next;}
}
void print(list *h){
	if(!h)
	return;
	else{
		cout<<h->data<<"  ";
		print(h->next);}
}
int main(){
	int x,y;
	cout<<"Enter total nodes in first list : ";
	cin>>x;
	for(int i=0; i<x; i++){
		cout<<"\nEnter values : ";
		cin>>y;
		add(&h1,y);}
	cout<<"\nEnter total nodes in second list : ";
	cin>>x;
	for(int i=0; i<x; i++){
		cout<<"\nEnter values : ";
		cin>>y;
		add(&h2,y);}
	cout<<"\nFirst list is :\n";
	print(h1);
	cout<<"\nSecond list is :\n";
	print(h2);
	cout<<"\nCommon values are :\n";
	common(h1,h2);	
	return 0;	
}