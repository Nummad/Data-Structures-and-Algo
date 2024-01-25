#include<iostream>
#include<stack>
using namespace std;
bool palindrome(stack<char> s,int x){
	char temp[x];
	for(int i=0; i<x; i++){
		temp[i]=s.top();
		s.pop();
	}
	for(int j=(x/2); j>=0; j--){
		if(temp[j]!=temp[x-j-1])
		return false;
	}
	return true;
}
int main(){
	string s;
	cout<<"Enter string you want to check : ";
	getline(cin,s);
	stack<char> st;
	int x=s.size();
	for(int i=0; i<x; i++){
		st.push(s[i]);
	}
	(palindrome(st,x)) ? cout<<"Palindrome\n" : cout<<"Not palindrome\n";
}