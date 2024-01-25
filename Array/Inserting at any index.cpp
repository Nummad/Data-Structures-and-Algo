#include<iostream>
using namespace std;
const int size=10;
class Array{
	int arr[size];
	int elements=0;
	public:
		void add(int val){
			if(elements >= size){
				cout<<"Array is full"<<endl;
				exit(0);
			}
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
		void insert(int key){
			int ind=search(key);
			if(elements==size or ind==-1){
				cout<<"\nInsertion not possible\n\n";
				exit(1);
			}
			else{
				for(int i=elements; i>ind; i--){
					arr[i]=arr[i-1];
				}
				cout<<"\nEnter value before "<<key<<" : ";
				cin>>arr[ind];
				elements+=1;
		}
	}
}a;
int main(){
	a.add(1);
	a.add(2);
	a.add(3);
	a.add(4);	
	a.add(5);
	a.add(6);
	a.display();
	a.insert(3);
	a.display();	
}