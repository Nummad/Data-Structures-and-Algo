
#include<iostream>
using namespace std;
class List{
	public:
	int data;
	List * next;
}*h,*sorted;
void push(int x){
	List * newnode=(List*)malloc(sizeof(List));
	newnode->data=x;
	newnode->next=h;
	h=newnode;
}
List * mid(List * start, List * end){
	if(start==NULL)
	return NULL;
	List * first=start;
	List * last=start->next;
	while(last!=end){
		last=last->next;
		if(last!=end){
			first=first->next;
			last=last->next;}}
		return first;	
}
List * Binarysearch(List * h,int key){
	List * start=h;
	List * last=NULL;
	do{List * middle=mid(start,last);
		if(middle==NULL)
		return NULL;
		if(middle->data==key)
		return middle;
		else if(middle->data < key)
		start=middle->next;
		else
		last=middle;
	}while(last==NULL or last!=start);
	return NULL;
}
void sortedinsert(List * newnode){
	if(sorted==NULL or sorted->data >= newnode->data){
		newnode->next=sorted;
		sorted=newnode;
	}
	else{
		List * current=sorted;
		while(current->next != NULL and current->next->data < newnode->data){
			current=current->next;
		}
		newnode->next=current->next;
		current->next=newnode;
}}
void insertionsort(){
	List * newnode=h;
	while(newnode!=NULL){
		List * next=newnode->next;
		sortedinsert(newnode);
		newnode=next;}
	h=sorted;
}
void print(List * h){
	while(h!=NULL){
		cout<<h->data<<"  ";
		h=h->next;}
}
int main(){
	int x,y;
/*	List * first=new List;
	List * second=new List;
	List * third=new List;
	List * last=new List;
	first->data=1;
	first->next=second;
	second->data=2;
	second->next=third;
	third->data=3;
	third->next=last;
	last->data=4;
	last->next=NULL;*/
	cout<<"Enter total elements : ";
	cin>>y;
	for(int i=0; i<y; i++){
		cout<<"\nEnter elements : ";
		cin>>x;
		push(x);
	}
	cout<<"Linked list is before sorting is : \n";
	print(h);
	cout<<"\nLinked list is after sorting is : \n";
	insertionsort();
	print(h);
	cout<<"\nEnter value to search : \n";
	cin>>x;
	(Binarysearch(h,x)==NULL) ? cout<<"Value not found \n" : cout<<"Value found \n";
}