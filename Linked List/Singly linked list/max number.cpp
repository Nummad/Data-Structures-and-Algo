#include<iostream>
using namespace std;
class list{
	public:
		int data;
		list * next;
}*h;
void add(int val){
	list *newnode=new list;
	newnode->data=val;
	newnode->next=h;
	h=newnode;
}
void print(list *obj){
	if(obj==NULL)
	return;
	else{
		cout<<obj->data<<"  ";
		print(obj->next);
	}
}
void big(list *obj){
	int max=obj->data;
	while(obj!=NULL){
		if(obj->data>max)
		max=obj->data;
		obj=obj->next;}
	cout<<"\nMax number is : "<<max;
}
int main(){
	for(int i=0; i<5; i++){
		int a;
		cout<<"Enter number : ";
		cin>>a;
		add(a);}
	cout<<"\nList is :\n";
	print(h);
	big(h);
}