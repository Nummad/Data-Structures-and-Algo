#include<iostream>
using namespace std;
int lcm(int n1,int n2){
	if(n1==0 || n2==0)					
	return 0;							
	else if(n1==n2)
	return n1;
	return (n1>n2) ? lcm(n1-n2,n2) : lcm(n1,n2-n1);					
}
int main(){
	int x,y;
	cout<<"Enter two numbers : ";
	cin>>x>>y;
	if(x < 0)
	x*=-1;
	if(y < 0)
	y*=-1;
	cout<<"LCM of "<<x<<" and "<<y<<" is : ";
	cout<<(x/lcm(x,y))*y;
}