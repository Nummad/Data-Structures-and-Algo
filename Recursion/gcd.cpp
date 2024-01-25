#include<iostream>
using namespace std;
int gcd(int n1,int n2){		
	if(n1==0 || n2==0)					
	return 0;							
	else if(n1==n2)
	return n1;
	else
	return (n1>n2) ? gcd(n1-n2,n2) : gcd(n1,n2-n1);					
}
int main(){
	int x,y;			//x=15   y=20
	cout<<"Enter two numbers : ";
	cin>>x>>y;
	cout<<"GCD of "<<x<<" and "<<y<<" is : ";
	if(x < 0)
	x*=-1;
	if(y < 0)
	y*=-1;
	cout<<gcd(x,y);
}