/*#include<iostream>
using namespace std;
struct A{
	int arr;
};
struct B{
	A obj;
};
int main(){
	B b[5];
	for(int i=0; i<5; i++){
		b[i].obj.arr=i;
	}
	for(int i=0; i<5; i++)
	cout<<b[i].obj.arr<<"  ";
}*/
/*
#include<iostream>
using namespace std;
int main(){
	if(2==2==2)
	cout<<"Yes";
	else
	cout<<"No";
}
*/

/*
#include<iostream>
using namespace std;
int main(){
	int arr1[2][2]={1,2,3,4};
	int arr2[2][2]={5,6,7,8};
	int arr3[2][2];
	for(int i=0; i<2; i++){
		for(int j=0; j<2; j++){
			int k=0;
			arr3[i][j]=(arr1[k][j] * arr2[i][k]) + (arr1[i][k+1] * arr2[k+1][j]);
		}
	}
	for(int i=0; i<2; i++){
		for(int j=0; j<2; j++){
			cout<<arr3[i][j]<<"  ";
		}
		cout<<endl;
	}
}*/

/*
#include<iostream>
using namespace std;
const int size=3;
struct stack{
	int total=-1;
	int arr[size];
};
bool full(stack * s){
	return (s->total == size-1) ? 1 : 0;
}
bool empty(stack * s){
	return (s->total == -1) ? 1 : 0;
}
void push(stack * s, int val){
	if(full(s)){
		cout<<"Stack overflow\n";	
	}
	else
	s->arr[++(s->total)]=val;
}
void pop(stack * s){
	if(empty(s)){
		cout<<"Stack is empty\n";
	}
	else
	s->total-=1;
}
int top(stack * s){
	return s->arr[s->total];
}
int sizee(stack * s){
	return s->total;
}
int main(){
	stack s;
//	push(&s,1);
//	push(&s,2);
	push(&s,2);
	push(&s,2);
//	push(&s,2);
	cout<<sizee(&s);
//	cout<<top(&s);
//	pop(&s);
//	cout<<top(&s);
//	pop(&s);
//	pop(&s);
}
*//*
#include<iostream>
using namespace std;
void print(int arr[][2][2]){
	for(int i=0; i<2; i++){
		for(int j=0; j<2; j++){
			for(int k=0; k<2; k++){
				cout<<arr[i][j][k]<<"   ";
			}
			cout<<endl;
		}
	}
}
int main(){
	int arr[2][2][2],x=0;
		for(int i=0; i<2; i++){
		for(int j=0; j<2; j++){
			for(int k=0; k<2; k++){
				arr[i][j][k]=x++;
			}
		}
	}
	print(arr);
}*//*
#include<iostream>
using namespace std;
int main(){
	int arr1[2][2]={1,2,3,4},arr2[2][2]={5,6,7,8};
	int arr3[2][2];
	for(int i=0; i<2; i++){
		for(int j=0; j<2; j++){
			int k=0;
			arr3[i][j]=(arr1[i][k] * arr2[k][j]) + (arr1[i][k+1] * arr2[k+1][j]);
		}
	}
	for(int i=0; i<2; i++){
		for(int j=0; j<2; j++){
			cout<<arr3[i][j]<<"   ";
		}
		cout<<endl;
	}
}

*/
/*
#include<iostream>
using namespace std;
struct Book{
	int id,pages,price;
};
int main(){
	Book b[5];
	for(int i=0; i<5; i++){
		cout<<"Enter id : ";
		cin>>b[i].id;
		cout<<"Enter price : ";
		cin>>b[i].price;
		cout<<"Enter pages : ";
		cin>>b[i].pages;
	}
	int max=b[0].price,index;
	for(int i=0; i<5; i++){
		if(max<b[i].price){
			max=b[i].price;
			index=i;
		}
	}
	cout<<b[index].pages<<endl<<b[index].id<<endl<<b[index].price;
}*/
/*
#include<iostream>
using namespace std;
int main(){
	int arr[2][2][2];
	for(int i=0; i<2; i++ ){
		for(int j=0; j<2; j++){
			for(int k=0; k<2; k++){
				cout<<"Enter values : ";
				cin>>arr[i][j][k];
			}
		}
	}
	int min=arr[0][0][0],max=arr[0][0][0];
	float sum=0,ave;
		for(int i=0; i<2; i++ ){
		for(int j=0; j<2; j++){
			for(int k=0; k<2; k++){
					if(max<arr[i][j][k])
					max=arr[i][j][k];
					else if(min>arr[i][j][k])
					min=arr[i][j][k];
					
					sum+=arr[i][j][k];		
			}
		}
	}
	cout<<"Max"<<max;
	cout<<"\nMin"<<min;
	ave=(sum/84);
	cout<<"\n"<<ave;
}
*/
#include<iostream>
#include<stack>
using namespace std;
class list{public:
		int data;			
		list *next;};
int main(){
	list *first=new list;		list *second=new list;		list *third=new list;
	first->data=1;		first->next=second;
	second->data=2;		second->next=third;
	third->data=1;		third->next=NULL;
	stack<int> s;
	list *temp=first;
	while(first!=NULL){
		s.push(first->data);
		first=first->next;}
	bool b=true;
	while(!s.empty()){
		if(temp->data != s.top()){
			b=false;	break;}
		temp=temp->next;
		s.pop();}
	(b) ? cout<<"Palindrome" : cout<<"Not palindrome";}





















