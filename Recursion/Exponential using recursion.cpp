//Define a function to calculate power of a number raised to other i.e. a^b using recursion where 
//the numbers 'a' and 'b' are to be entered by the user

#include<iostream>
using namespace std;
float calculation(float x,int y){
	if(y==0)
	return 1;
	else{
		return (x*calculation(x,y-1));
	}
}
int main(){
	float b;
	int e;
	cout<<"Enter base : ";
	cin>>b;
	cout<<"Enter exponent : ";
	cin>>e;
	cout<<b<<" raised to the power of "<<e<<" is : "<<calculation(b,e);
}