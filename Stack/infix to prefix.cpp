#include<bits/stdc++.h>
using namespace std;
int precedence(char c){
    if (c == '^' || c=='$')
        return 3;
    else if (c == '/' || c == '*')
        return 2;
    else if (c == '+' || c == '-')
        return 1;
    else
        return -1;
}
bool precheck(char c1,char c2){
	int i1=precedence(c1);
	int i2=precedence(c2);
	bool x;
	return (i1 > i2);
}
string infixToPostfix(string s){ 
    stack<char> st; 
    string result;
    for(int i = 0; i < s.length(); i++) {
        char c = s[i];
        if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'))
            result += c;
        else if(c == '(')
            st.push(c);   
        else if (c == ')'){
            while(!st.empty() && st.top() != '('){
                result += st.top();
                st.pop();
            }
            st.pop();
        }
        else {
            while (!st.empty() && precheck(st.top(),c)){
                result += st.top();
                st.pop();}
            st.push(c);
    }}
    while (!st.empty()){																								
        result += st.top();
        st.pop();} 																				
    return result;
}
void PostfixToPrefix(string infix){
	reverse(infix.begin(), infix.end());
	for (int i = 0; i < infix.size(); i++){

		if(infix[i] == '(') {
			infix[i] = ')';
		}
		else if(infix[i] == ')') {
			infix[i] = '(';
		}
	}
	string prefix = infixToPostfix(infix);
	reverse(prefix.begin(), prefix.end());
	cout<<"Prefix form is : "<<prefix;
}
int main(){
	string s;
	cout<<"Enter expression : ";
	getline(cin,s);
	PostfixToPrefix(s);
	return 0;
}