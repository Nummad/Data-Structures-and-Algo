#include<iostream>
#include<stack>
#include<string>
using namespace std;
int main(){
	string s;
	stack<char> st;
	cout<<"Enter a string : ";
	getline(cin,s);
	int x=s.size();
	for(int i=0; i<x; i++){
		char c=s[i];
		st.push(c);
	}
	cout<<"\nReversed string is : ";
	while(!st.empty()){
		cout<<st.top();
		st.pop();
	}
}