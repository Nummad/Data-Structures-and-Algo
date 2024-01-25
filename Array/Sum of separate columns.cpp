#include<iostream>
using namespace std;
int main(){
	int arr[3][2],sum1=0,sum2=0;
	for(int i=0; i<3; i++){
		for(int j=0; j<2; j++){
			cout<<"\nEnter values : ";
			cin>>arr[i][j];
			(j==0) ? sum1+=arr[i][j] : sum2+=arr[i][j];
		}
	}
	cout<<"Sum of first column is : "<<sum1;
	cout<<"\nSum of second column is : "<<sum2;
}