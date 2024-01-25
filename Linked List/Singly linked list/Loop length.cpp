#include<iostream>
using namespace std;
class list{
	public:
		int data;
		list *next;
}*h;
void add(int key){
	list *node=new list;
	node->data=key;
	node->next=(h);
	(h)=node;
}
int count(list* n){
    int res = 1;
    list* temp = n;
    while (temp->next != n) {
        res++;
        temp = temp->next;}
	return res;
}
int countnodes(list *n){
    list *first=n, *last=n;
    while (first && last && last->next) {
        first=first->next;
        last=last->next->next;
        if (first==last)
            return count(first);}
    return 0;
}
void print(list *h){
	while(h!=NULL){
		cout<<h->data<<"    ";
		h=h->next;}
}
int main(){
	int x,y;
	cout<<"Enter total nodes : ";
	cin>>x;
	while(x<4){
		cout<<"Enter again : ";
		cin>>x;}
	for(int i=0; i<x; i++){
		cout<<"\nEnter values : ";
		cin>>y;
		add(y);}
		cout<<"\nList is :\n";
	print(h);
	h->next->next->next=h;
	countnodes(h)!=0 ? cout<<"\nLoop length is : "<<countnodes(h) : cout<<"\nLoop not found";			
}