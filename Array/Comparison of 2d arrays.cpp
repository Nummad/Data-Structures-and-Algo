#include<iostream>
using namespace std;
int main(){
	int arr1[2][2],arr2[2][2];
	bool b;
	for(int i=0; i<2; i++){
		for(int j=0; j<2; j++){
			cout<<"\nEnter values in first array : ";
			cin>>arr1[i][j];}}
	for(int i=0; i<2; i++){
		for(int j=0; j<2; j++){
			cout<<"\nEnter values in second array : ";
			cin>>arr2[i][j];}}
	for(int i=0; i<2; i++){
		for(int j=0; j<2; j++){
			b=false;
			if(arr1[i][j]==arr2[i][j])
			b=true;
			if(b==false)
			break;}}
	(!b) ? cout<<"\nNot equal" : cout<<"\nEqual";						
}