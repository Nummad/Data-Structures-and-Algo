#include<iostream>
using namespace std;
const int size=10;
class Array{
	int arr[size];
	int elements=0;
	public:
		void add(int key){
			if(elements >= size){
				cout<<"Array is full";
				exit(0);}
			arr[elements++]=key;
		}
		void print(){
			for(int i=0; i<elements; i++){
				cout<<"Value at "<<i<<" index is : "<<arr[i]<<endl;
			}
		}
		void pair(){
			for(int i=0; i<elements; i++){
				for(int j=i+1; j<elements; j++){
					if(arr[i]+arr[j]==10){
						cout<<i<<" and "<<j<<" index values have sum of 10 :"<<arr[i]<<" and "<<arr[j]<<endl;
					}
				}
			}
		}
}a;
int main(){
	a.add(1);
	a.add(8);
	a.add(7);
	a.add(9);
	a.add(2);
	a.add(6);
	a.add(3);
	a.add(-1);
	a.add(6);
	a.add(0);
	cout<<endl;
	a.print();
	cout<<endl;
	a.pair();
}