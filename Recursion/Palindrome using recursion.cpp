#include<iostream>
using namespace std;
bool check(string str,int first, int last){		//str=madam    first=0   last=5
	if(first==last)
    return true;
    /*if(str[first] != str[last])
    return false;
	return check(str,first+1,last-1);*/
	return (str[first] != str[last]) ? false : check(str,first+1,last-1);
} 
bool Palindrome(string str){			//str=madam   size=5
	int n=str.size();
    if (n==0)
        return true;    
    return check(str,0,n-1);
}
int main(){
    string s="madam";
    (Palindrome(s)) ? cout<<"Yes" : cout<<"No";
    return 0;
}