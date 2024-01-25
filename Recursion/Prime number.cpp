#include<iostream>
using namespace std;
bool prime(int x){
	static int divider=1;
	if(divider==(x/2 || x==1))
	return false;
	else{
		divider++;
		return (x%divider==0) ? true : prime(x);
	}
}
int main(){
	int x;
	cout<<"Enter number you want to check : ";
	cin>>x;
	prime(x) ? cout<<"Not prime" : cout<<"Prime"; 
}