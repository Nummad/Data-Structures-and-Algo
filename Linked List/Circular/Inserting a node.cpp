#include<iostream>
using namespace std;
class List{
	public:
	int data;
	List * next;
};
List * AddToEmpty(List * last,int data){					
	if(last != NULL)
	return last;
	List * temp=new List;
	temp->data=data;
	last=temp;
	last->next=last;
	return last;
}
List * push(List * last,int data){
	List * temp=new List;				//Add to start
	temp->data=data;
	temp->next=last->next;
	last->next=temp;
	return last;
}
List * AddAfter(List * last, int data, int nodenumber){
	int count=1;
	if (last == NULL)
    return NULL; 
    List *temp, *p;
    p = last->next; 
    do{
        if (count == nodenumber) {
            temp=new List;
            temp->data = data;
            temp->next = p->next;
            p->next = temp;
            if (p == last)
                last = temp;
            return last;}
            count++;
        p = p->next;
    }while (p != last->next);
    return last;
}
List * AddAtEnd(List * last, int data){
    if (last == NULL)
        return AddToEmpty(last, data);
	List * temp=new List;
    temp->data = data;
    temp->next = last->next;
    last->next = temp;
    last = temp; 
    return last;
}
void print(List * last){
	List * ptr=last->next;
	do{
		cout<<ptr->data<<"   ";
		ptr=ptr->next;
	}while(ptr != last->next);
}
int main(){
	List * last=NULL;
	int x,y,z;
	cout<<"\n\n1-> Insertion at front";
	cout<<"\n\n2-> Insertion after a specific node";
	cout<<"\n\n3-> Insertion at the end";
	cout<<"\n\nEnter option : ";
	cin>>z;
	if(z==1){
	cout<<"Enter total nodes : ";
	cin>>x;
	while(x<1){
	cout<<"Enter again : ";
	cin>>x;}
	for(int i=1; i<=x; i++){
	cout<<"\nEnter values : ";
	cin>>y;
	(i==1) ? last=AddToEmpty(last,y) : last=push(last,y);}	
	cout<<"Created linked list is :\n";
	print(last);
	cout<<"\nEnter value you want to insert at start : ";
	cin>>y;
	last=push(last,y);
	print(last);}
	else if(z==2){
	cout<<"Enter total nodes : ";
	cin>>x;
	while(x<1){
	cout<<"Enter again : ";
	cin>>x;}
	for(int i=1; i<=x; i++){
	cout<<"\nEnter values : ";
	cin>>y;
	(i==1) ? last=AddToEmpty(last,y) : last=push(last,y);}
	cout<<"Enter node number after which you want to insert value : ";
	cin>>y;
	while(y>=x || y<1){
	cout<<"Enter again : ";
	cin>>y;}
	cout<<"\nEnter value you want to insert : ";
	cin>>x;
	last=AddAfter(last,x,y);
	print(last);}
	else if(z==3){
	cout<<"Enter total nodes : ";
	cin>>x;
	while(x<1){
	cout<<"Enter again : ";
	cin>>x;}
	for(int i=1; i<=x; i++){
	cout<<"\nEnter values : ";
	cin>>y;
	(i==1) ? last=AddToEmpty(last,y) : last=push(last,y);}
	cout<<"\nEnter value you want to insert at end : ";
	cin>>y;
	last=AddAtEnd(last,y);
	print(last);}
}