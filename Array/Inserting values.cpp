#include<iostream>
using namespace std;
const int size=10;
class Array{
	int arr[size];
	int elements=0;
	public:
		void add(int key){
			if(elements<size)
			arr[elements++]=key;
			else{
			cout<<"Maximum size is "<<size;
			exit(0);}
		}
		void display(){
			for(int i=0; i<elements; i++){
				cout<<"Value at "<<i<<" index is : "<<arr[i]<<endl;
			}
			cout<<"Total elements are : "<<elements;
		}
}a;
int main(){
	int x,y;
	cout<<"Enter total values : ";
	cin>>y;
	for(int i=0; i<y; i++){
		cout<<"\nEnter values : ";
		cin>>x;
		a.add(x);}
	/*	a.add(1);
		a.add(2);
		a.add(3);
		a.add(4);
		a.add(5);
		a.add(1);
		a.add(1);
		a.add(1);*/
	a.display();
}