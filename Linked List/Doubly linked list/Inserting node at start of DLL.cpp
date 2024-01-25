#include<iostream>
using namespace std;
class List{
	public:
	int data;
	List * next;
	List * previous;
};
void insert(List ** h,int newdata){
	List * newnode=new List;
	newnode->data=newdata;
	newnode->next=(*h);
	newnode->previous=NULL;
	if((*h)!=NULL)
	(*h)->previous=newnode;
	(*h)=newnode;
}
void print(List * h){
	List * temp;
	cout<<"Forward traversal \n";
	while(h!=NULL){
		cout<<h->data<<"   ";
		temp=h;
		h=h->next;
	}
	cout<<"\nReverse traversal \n";
	while(temp!=NULL){
		cout<<temp->data<<"   ";
		temp=temp->previous;
	}
}
int main(){
	List * first=NULL;
	int x,y;
	cout<<"Enter total nodes : ";
	cin>>x;
	for(int i=1; i<=x; i++){
		cout<<"\nEnter values : ";
		cin>>y;
		insert(&first,y);	
	}
	cout<<"\nEnter number you want to insert : ";
	cin>>x;
	cout<<"\nList before insertion is :\n";
	print(first);
	cout<<"\nList after insertion is :\n";
	insert(& first, x);
	print(first);
}