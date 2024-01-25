#include<iostream>
using namespace std;
class list{
	public:
		int data;
		list *next;
}*h;
void insert(int key){
	list *node=new list;
	node->data=key;
	node->next=h;
	h=node;	
}
int total(list *h){
	int size=0;
	while(h!=NULL){
		size++;
		h=h->next;
	}
	return size;
}
int main(){
		list *q=new list;
		list *w=new list;
		list *e=new list;
		q->data=1;
		q->next=w;
		w->data=2;
		w->next=e;
		e->data=3;
		e->next=NULL;
	cout<<"Total size is : "<<total(q);	
}