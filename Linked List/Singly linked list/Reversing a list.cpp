#include<iostream>
using namespace std;
class List{
	public:
		int data;
		List * next;
}*h;
void push(int x){
	List * newnode=new List;
	newnode->data=x;
	newnode->next=h;
	h=newnode;
}
void print(List * n){
	while(n!=NULL){
		cout<<n->data<<"  ";
		n=n->next;}
}
void reverse(List ** head) {
    List *temp = NULL;
    List *prev = NULL;
    List *current = (*head);
    while(current != NULL) {
        temp=current->next;
        current->next=prev;
        prev=current;
        current=temp;
    }
    (*head)=prev;
}
int main(){
	int x,y;
	cout<<"Enter total number of nodes : \n";
	cin>>x;
	for(int i=1; i<=x; i++){
		cout<<"Enter values : \n";
		cin>>y;
		push(y);
	}
	cout<<"Values entered are : \n";
 	print(h);
 	cout<<"\nReversed list is : \n";
 	reverse(&h);
 	print(h);
}