#include<iostream>
using namespace std;
int main(){
	int arr[3][4],sum=0;
	for(int i=0; i<3; i++){
		for(int j=0; j<4; j++){
			cout<<"\nEnter values : ";
			cin>>arr[i][j];
			sum+=arr[i][j];
		}
	}
	cout<<"Sum is : "<<sum;
}