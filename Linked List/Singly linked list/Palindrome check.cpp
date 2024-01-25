#include<iostream>
#include<stack>
using namespace std;
class list {
	public:
		int data;
		list *next;
}*h;
void push(int val) {
	list *newnode=new list;
	newnode->data=val;
	newnode->next=h;
	h=newnode;
}
void print(list * obj) {
	if(obj==NULL)
		return ;
	else {
		cout<<obj->data<<" ";
		print(obj->next);
	}
}
int main() {
	stack<int> s;
	int y;
	cout<<"Enter total digits : ";
	cin>>y;
	while(y<1) {
		cout<<"Enter again : ";
		cin>>y;
	}
	for(int i=1; i<=y; i++) {
		cout<<"Enter val : ";
		int x;
		cin>>x;
		push(x);
	}
	list *first=h;
	list *temp=h;
	while(first!=NULL) {
		s.push(first->data);
		first=first->next;
	}
	bool check=true;
	while(!s.empty()) {
		if(s.top() != temp->data) {
			check=false;
			break;
		}
		temp=temp->next;
		s.pop();
	}
	cout<<"\nList is :";
	print(h);
	(check) ? cout<<"\nPalindrome" : cout<<"\nNot palindrome";
}