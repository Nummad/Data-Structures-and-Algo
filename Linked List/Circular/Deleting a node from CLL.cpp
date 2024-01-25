#include<iostream>
using namespace std;
class List{
	public:
		int data;
		List * next;
};
void add(List ** h, int newdata){
	List * ptr=new List;
	ptr->data=newdata;
	ptr->next=*h;
	if(*h != NULL){
		List * temp=*h;
		while(temp->next != *h)
		temp=temp->next;
		temp->next=ptr;
	}
	else
		ptr->next=ptr;
	*h=ptr;
}
void printList(List * head)
{
	List * temp = head;
	if (head != NULL) {
		do {
			cout << temp->data << " ";
			temp = temp->next;
		} while (temp != head);
	}
	cout << endl;
}
void Delete(List ** head, int key){
	if((*head)->data==key && (*head)->next==*head){
		*head=NULL;
		return;
	}
	List *last=*head,*d;
	if((*head)->data==key){
		while(last->next!=*head)
			last=last->next;
		last->next=(*head)->next;
		free(*head);
		*head=last->next;
	return;
	}
	while(last->next!=*head&&last->next->data!=key){
		last=last->next;}
	if(last->next->data==key){
		d=last->next;
		last->next=d->next;
		free(d);
	}
	else
		cout<<"Value not found\n";
}
int main(){;
List * head = NULL;
int x,y;
cout<<"Enter total elements :\n";
cin>>x;
for(int i=1; i<=x; i++){
    cout<<"Enter elements :\n";
    cin>>y;
    add(&head,y);}
cout << "List Before Deletion: ";
	printList(head);
	cout<<"Enter number to delete : ";
	cin>>x;
	Delete(&head, x);
	cout << "List After Deletion of "<<x<<" is : ";
	printList(head);
	return 0;
}