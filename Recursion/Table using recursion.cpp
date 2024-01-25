//Print the multiplication table of 15 using recursion.

#include<iostream>
using namespace std;
int x=1;
void table(int num){
	if(x==11)
	return;
	else{
		cout<<num * x<<endl;
		x++;
		table(num);
	}
}
int main(){
	table(78);
}