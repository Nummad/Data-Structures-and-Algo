#include<iostream>
using namespace std;
const int size=10;
class Array{
	int arr[size];
	int elements=0;
	public:
		void add(int val){
			arr[elements++]=val;
		}
		void display(){
			for(int i=0; i<elements; i++){
				cout<<"Value at "<<i<<" index is : "<<arr[i]<<endl;
			}
			cout<<"Total elements are : "<<elements<<endl;
		}
		int search(int key){
			for(int i=0; i<elements; i++){
				if(arr[i]==key)
				return i;
			}
			return -1;
		}
}a;
int main(){
	int x,y;
	cout<<"Enter total values : ";
	cin>>x;
	for(int i=0; i<x; i++){
		cout<<"\nEnter values : ";
		cin>>y;
		a.add(y);
	}
	a.display();
	cout<<"\nEnter value you want to search : ";
	cin>>x;
	y=a.search(x);
	y==-1 ? cout<<"\nNot found" : cout<<"\nFound at index "<<y;
}