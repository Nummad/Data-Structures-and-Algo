//Using recursion, define a function to know nth term of a Fibonacci series.
//CSS past paper 2020
#include <iostream>
using namespace std;
int fib(int x) {
    return (x==1 || x==0 ) ? x : (fib(x-1) + fib(x-2));
}
int main(){
    int x,i=0;
    cout<<"Enter the number of terms of series : ";
    cin>>x;
    while(x<1){
    	cout<<"Enter again : ";
    	cin>>x;
	}  
    cout<<"\nFibonnaci Series : ";
    while(i<=x){
      cout<<" "<<fib(i);
      i++;
    }
    return 0;
}