#include<iostream>
using namespace std;
int main(){
	int arr[2][3],sum1=0,sum2=0;
	for(int i=0; i<2; i++){
		for(int j=0; j<3; j++){
			cout<<"\nEnter values : ";
			cin>>arr[i][j];
			(i==0) ? sum1+=arr[i][j] : sum2+=arr[i][j];
		}
	}
	cout<<"Sum of first row is : "<<sum1;
	cout<<"\nSum of second row is : "<<sum2;
}