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
void sort(List * h){
	bool swapped;
	List * ptr;
	if(h==NULL)
	return;
	do{
		swapped=false;
		ptr=h;
		while(ptr->next != NULL){
			if(ptr->data > ptr->next->data){
			swap(ptr->data , ptr->next->data);
			swapped=true;}
		ptr=ptr->next;}
	}
	while(swapped);
}
void print(List * h){
	while(h!=NULL){
		cout<<h->data<<"   ";
		h=h->next;}
}
int main(){
	int x,y;
	cout<<"Enter Total elements of list : ";
	cin>>x;
	List * head=NULL;
	for(int i=1; i<=x; i++){
		cout<<"\nEnter elements :\n";
		cin>>y;
		add(&head, y);
	}
	cout<<"\nCreated linked list is :\n";
	print(head);
	cout<<"\nSorted list is :\n";
	sort(head);
	print(head);
}