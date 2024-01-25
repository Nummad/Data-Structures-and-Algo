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
	node->next=*h;
	*h=node;
}
void Swap(list **h){
	if(*h==NULL or (*h)->next==NULL)
	return;
	list *last=(*h);
	list *seclast=NULL;
	while(last->next!=NULL){
		seclast=last;
		last=last->next;}
	seclast->next=NULL;
	last->next=*h;
	*h=last;	
}
void print(list *h){
	while(h!=NULL){
		cout<<h->data<<"   ";
		h=h->next;}
}
int main(){
	int x,y;
	list *node=NULL;
	cout<<"Enter total nodes : ";
	cin>>y;
	for(int i=0; i<y; i++){
		cout<<"\nEnter values : ";
		cin>>x;
		add(&node,x);}
	cout<<"\nOriginal list is :\n";
	print(node);
	cout<<"\nList after swapping is :\n";
	Swap(&node);
	print(node);	
}