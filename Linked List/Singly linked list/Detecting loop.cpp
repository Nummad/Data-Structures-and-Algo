#include<iostream>
using namespace std;
class list{
	public:
	int data;
	list * next;
}*h;
void add(int key){
	list *node=new list;
	node->data=key;
	node->next=h;
	h=node;
}
bool loop(list *h){
	if(h==NULL)
	return false;										
	else{
	if(h->data==NULL)
	return true;
	h->data=NULL;			//n =	null null null 4
	return loop(h->next);}
}
void print(list *h){
	if(h==NULL)
	return;
	else{
	cout<<h->data<<"  ";
	print(h->next);}
}
int main(){
	system("color b0");
	int x,y; 
	cout<<"\n\nEnter total number of nodes : ";
	cin>>x;
	for(int i=0; i<x; i++){
	cout<<"\nEnter values : ";
	cin>>y;
	add(y);}
	cout<<"\nList is :\n";
	print(h);
//	h->next->next=h;
	(loop(h)) ? cout<<"\n\nLoop found " : cout<<"\n\nNo loop found";
}