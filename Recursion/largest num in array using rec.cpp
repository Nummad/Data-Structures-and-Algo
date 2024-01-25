#include<iostream>
using namespace std;
int largest(int arr[],int size){
	static int x=0,large=0;
	if(x<size){
		if(large<arr[x])
		large=arr[x];
		x++;
		largest(arr,size);
	}
	return large;
}
int main(){
	int arr[]={22,4,2003,12,6,2001};
	int size=(sizeof(arr)/sizeof(arr[0]));
	cout<<"Largest number in the array is : ";
	cout<<largest(arr,size);
}