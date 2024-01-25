#include<iostream>
using namespace std;
int main(){
	int arr[3][3],sum=0;
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			cout<<"\nEnter elements : ";
			cin>>arr[i][j];
			if(j==i)
			sum+=arr[i][j];}}
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			cout<<arr[i][j]<<"  ";
		}
		cout<<endl;
	}		
	cout<<"Sum of right diagonal is : "<<sum;		
}