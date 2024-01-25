#include<iostream>
using namespace std;
class List{
	public:
	int data;
	List * next;
};
void sort(List ** h, List * newnode){
	List * current=* h;
	if(current == NULL){
		newnode->next=newnode;
		*h=newnode;
	}
	else if(current->data >= newnode->data){
		while(current->next != *h)
		current=current->next;
		current->next=newnode;
		newnode->next=*h;
		*h=newnode;
	}
	else{
		while(current->next != *h && current->next->data < newnode->data)
		current=current->next;
		newnode->next=current->next;
		current->next=newnode;}
}
void print(List * start){
	List * temp;
	if (start != NULL){
		temp=start;
		do{
			cout << temp->data << " ";
			temp = temp->next;
		} while (temp != start);
	}
	cout << endl;
}
int main(){
	int x,y;
	List * start=NULL;
	List * temp;
	cout<<"Enter total elements : ";
	cin>>x;
	for(int i=1; i<=x; i++){
		temp=new List;
		cout<<"\nEnter elements : ";
		cin>>y;
		temp->data=y;
		sort(& start,temp);}
	cout<<"\nSorted list is :\n";
	print(start);
}