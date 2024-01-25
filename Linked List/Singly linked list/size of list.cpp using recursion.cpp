#include<iostream>
using namespace std;
class list{
	public:
		int data;
		list * next;
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
int size(list * h){
	static int total=0;
	if(h==NULL)
	return 0;
	else
	h=h->next;
	total++;
	size(h);
	return total;
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
	cout<<"\nSize is : "<<size(h);	
}