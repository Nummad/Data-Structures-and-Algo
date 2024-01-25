#include<iostream>
using namespace std;
class List{
	public:
   int data;
   List *next;
}*head,*current;
void insert(int data) {
   List * link = (List*) malloc(sizeof(List));
   link->data = data;
   link->next = NULL;
   if(head==NULL) {
      head = link;
      head->next = link;
      return;
   }
   current = head;
   while(current->next != head)
      current = current->next;
   current->next = link;
   link->next = head;
}
void find(int key) {
   int pos = 0;
   if(head == NULL) {
      cout<<"Linked list is empty";
      return;
   } 
   current = head;
   while(current->next != head) {
      if(current->data == key) {
         cout<<key<<" found at index "<<pos<<endl;
         return;
      }
      current = current->next;
      pos++;
   }
   if(current->data == key) {
      cout<<key<<" found at index "<<pos<<endl;
      return;
   }
	cout<<key<<" does not exist in the list"<<endl;
}
int main() {
   int x,y;
   cout<<"Enter total elements : ";
   cin>>x;
   for(int i=1; i<=x; i++){
       cout<<"\nEnter elements : ";
       cin>>y;
       insert(y);}
   cout<<"\nEnter number to search for : ";
   cin>>x;
   find(x);
   return 0;
}