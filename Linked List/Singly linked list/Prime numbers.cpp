#include<iostream>
using namespace std;
class list{
	public:
		int data;
		list *next;
}*h;
void add(int val){
	list *newnode=new list;
	newnode->data=val;
	newnode->next=h;
	h=newnode;
}
void print(list * n){
	if(!n)
	return;
	else{
		cout<<n->data<<"  ";
		print(n->next);}
}
void prime(list * obj){
	while(obj!=NULL){
		bool check=false;
		int mid=obj->data;
		for(int i=2; i<=(mid/2); i++){
			if(mid%i==0){
			check=true;
			break;}
		}
		if(check==false)
		cout<<obj->data<<"   ";
		obj=obj->next;
	}
}
int main(){
	int x,y;
	cout<<"Enter total number of nodes : ";
	cin>>x;
	for(int i=0; i<x; i++){
		cout<<"Enter values: ";
		cin>>y;
		add(y);
	}
	cout<<"\nCreated list is :\n";
	print(h);
	cout<<"\nPrime numbers are :\n";
	prime(h);
}