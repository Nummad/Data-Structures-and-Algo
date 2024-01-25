#include <iostream>
using namespace std;
class List{
	public:
	int data;
	List * next;
}*head,*sorted;
void push(int val){
	List * newnode=new List;			
	newnode->data = val;
	newnode->next = head;
	head = newnode;
}
void sortedInsert(List * newnode){
	if (sorted == NULL || sorted->data >= newnode->data) {
		newnode->next = sorted;
		sorted = newnode;
	}
	else {
		List * current = sorted;
		while (current->next != NULL && current->next->data < newnode->data) {
			current = current->next;
		}
		newnode->next = current->next;
		current->next = newnode;}
}
void insertionsort(){
	List * current = head;
	while (current != NULL) {		
	List * next = current->next;
		sortedInsert(current);
		current = next;}
	head = sorted;
}
void printlist(List * head){
	if(head==NULL)
	return;
	else{
		cout<<head->data<<"  ";
		printlist(head->next);
	}
}
int main(){
    int x,y;
    cout<<"Enter total elements : ";
    cin>>x;
    for(int i=1; i<=x; i++){
    	cout<<"Enter elements \n";
    	cin>>y;
    	push(y);
	}
	cout<<"Linked List before sorting:\n";
	printlist(head);
	insertionsort();
	cout<<"\nLinked List after sorting:\n";
	printlist(head);
}