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
		void deletevalue(int key){
			int ind=search(key);
			if(ind==-1){
				cout<<"Value not found\n";
				return;
			}
			else{
				cout<<"\nDeleted value is : "<<key<<endl<<endl;
				for(int i=ind; i<elements; i++){
					arr[i]=arr[i+1];
				}
			}
			elements-=1;
		}
}a;
int main(){
	a.add(22);
	a.add(4);
	a.add(2003);
	a.add(12);
	a.add(200);
	a.add(6);
	a.display();
	a.deletevalue(4);
	a.display();
}