#include<iostream>
using namespace std;
class List{
public:
	int data;
	List * next;
};
bool deleteList(List ** ref, int key){
	List* temp = *ref;
	List* prev = NULL;
	if (temp->next != NULL && temp->data == key) {
		*ref = temp->next;
		delete temp;
		return 1;}
	else {
		while (temp != NULL && temp->data != key) {
			prev = temp;
			temp = temp->next;}
		if (temp == NULL){
			cout<<"Value not found \n";
			return 0;}
		prev->next = temp->next;										
		delete temp;
		return 1;}								
}
void printList(List * node){
	while (node != NULL) {
		cout << node->data << "   ";
		node = node->next;}
}
void push(List **h,int x){
	List * newnode=new List;
	newnode->data=x;
	newnode->next=*h;
	*h=newnode;
}
int main(){	
	int x,y;
	List *h=NULL;
	cout<<"Enter total elements : ";
	cin>>x;
	for(int i=1; i<=x; i++){
		cout<<"\nEnter elements : ";
		cin>>y;
		push(&h,y);}
/*	List * head =new List;
	List * first=new List;
	List * second=new List;
	List * last=new List;
	head->data=1;
	head->next=first; 
	first->data=2;
	first->next=second;
	second->data=3;
	second->next=last;
	last->data=4;
	last->next=NULL;*/
	cout<<"Created Linked List is :\n";
	printList(h);
	cout<<"\nEnter number to delete : ";
	cin>>x;
	if(deleteList(&h, x)==1){
	cout<<"\nLinked list after deletion of "<<x<<" :\n";
	printList(h);}
	else
	return 0;
}