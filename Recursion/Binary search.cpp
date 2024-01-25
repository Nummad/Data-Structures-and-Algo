#include<iostream>
using namespace std;
int binarysearch(int arr[],int min,int max,int x){				//min=3  max=4   x=4   mid=3
	if(min <= max){
	int mid=(min+max)/2;
	if(arr[mid]==x)
	return 1;
	return (arr[mid] > x) ? binarysearch(arr,min,mid-1,x) : binarysearch(arr,mid+1,max,x);}
	return 0;
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
	cout<<"Enter values : ";
	cin>>arr[i];}
	for(int i=0; i<x-1; i++){
		int min=i;
		for(int j=i+1; j<x; j++){
			if(arr[j]<arr[min])
			min=j;}
		swap(arr[min],arr[i]);}
	int y=x;
	cout<<"Enter value you want to search : ";
	cin>>x;
	(binarysearch(arr,0,y,x)) ? cout<<"Found" : cout<<"Not found";
	return 0;}