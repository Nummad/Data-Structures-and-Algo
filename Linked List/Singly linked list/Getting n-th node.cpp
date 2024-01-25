#include<iostream>
using namespace std;
class list{
	public:
		int data;
		list *next;
}*h;
void add(int key){
	list * node=new list;
	node->data=key;
	node->next=h;
	h=node;
}
void get(int x){
	list *node=h;
	for(int i=1; i<=x; i++){
		node=node->next;
	}
	cout<<"Node value at "<<x<<" is : "<<node->data;
}
void print(list *n){
	while(n!=NULL){
		cout<<n->data<<"  ";
		n=n->next;
	}
}
int main(){
	int x,y;
	cout<<"Enter total nodes : ";
	cin>>x;
	for(int i=1; i<=x; i++){
		cout<<"\nEnter values : ";
		cin>>y;
		add(y);}
	y=x;	
	cout<<"\nEnter node number you want to get : ";
	cin>>x;
	cout<<"\nList is :\n";
	print(h);
	cout<<endl;
	while(x>y){
		cout<<"\nEnter again : ";
		cin>>x;}
	get(x);	
}