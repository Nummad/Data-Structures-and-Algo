#include<iostream>
using namespace std;
int main(){
	int arr[3][3];
	bool b=1;
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			cout<<"\nEnter elements : ";
			cin>>arr[i][j];}}
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
				if((i==j) && (arr[i][j]!=1))
				b=false;
				else if((i!=j) && (arr[i][j]!=0)){
				b=false;}}}
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
		cout<<arr[i][j]<<"  ";}
		cout<<endl;
		}
	(b==false) ? cout<<"Not identity matrix" : cout<<"Identity matrix";	
} 