#include<iostream>
using namespace std;
void show(int arr[],int size);
int main(){
	int arr[]={12,6,2001,22,4,2003,8,8,2004};
	int size=(sizeof(arr)/sizeof(arr[0]));
	show(arr,size);
}
void show(int arr[],int size){
	int x=--size;
	if(size<0)
	return;
	else{
		show(arr,x);
		cout<<arr[x]<<endl;
	}
}
