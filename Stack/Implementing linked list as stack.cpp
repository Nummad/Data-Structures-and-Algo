#include<iostream>
using namespace std;
class list{
	public:
		int data;
		list *next;
}*top;
class stack{
	public:
	stack(){
		top=NULL;}
	void push(int x){
		list *node=new list;
		node->data=x;
		node->next=top;
		top=node;
	}
	bool empty(){
		return (top==NULL);
	}
	void pop(){
		if(empty())
		cout<<"Stack is empty";
		else
		top=top->next;
	}
	int Top(){
		if(!empty())
		return top->data;
		else{
		cout<<"Stack is empty";}
	}	
}s;
int main(){
	char x;
	int val;
	do{
		start:
		system("color b0");
		system("cls");
		cout<<"\n\n\t\t\t\t Linked list implementation of stack\n";
		cout<<"\n\n1-> Insert value\n\n2-> Pop value\n\n3-> Show top\n\n4-> Show all values\n\n"; 
		cout<<"5-> Exit\n\nEnter option : ";
		cin>>x;
		if(x=='1'){
			system("cls");
			cout<<"Enter value : ";
			cin>>val;
			s.push(val);
			cout<<val<<" inserted\n";}
		else if(x=='2'){
			system("cls");
			s.pop();
			cout<<"Value deleted\n";}
		else if(x=='3'){
			system("cls");
			cout<<s.Top()<<" is at top\n";}
		else if(x=='4'){
			system("cls");
			while(!s.empty()){
				cout<<s.Top()<<"  ";
				s.pop();}
				cout<<endl;}	
		else if(x=='5')
		return 0;
		else
		goto start;
		cout<<"Do you want to continue (y/n) : ";
		cin>>x;}
		while(x=='y' || x=='Y');				
	return 0;}