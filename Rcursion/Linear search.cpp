#include<iostream>
using namespace std;
bool linear(int arr[],int size,int num){
	if(size==-1)
	return false;
	else	
		return (arr[size]==num) ? true : linear(arr,size-1,num);
}
int main(){
	int x;
	cout<<"Enter total number of values : ";
	cin>>x;
	while(x<1){
		cout<<"Enter again : ";
		cin>>x;}
	int arr[x];
	for(int i=0; i<x; i++){
		cout<<"Enter value : ";
		cin>>arr[i];}
	int y=x;
	cout<<"Enter number you want to search : ";
	cin>>x;
	(linear(arr,y,x)) ? cout<<"Found" : cout<<"Not found";
	return 0;
}