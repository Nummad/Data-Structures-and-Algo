#include<iostream>
#include<stack>
using namespace std;
int precedence(char c){
    if (c == '^' || c=='$')
        return 3;
    else if (c == '/' || c == '*' || c=='%')
        return 2;
    else if (c == '+' || c == '-')
        return 1;
    else
        return -1;
}
bool precheck(char c1,char c2){
	int i1=precedence(c1);
	int i2=precedence(c2);
	if(i1 == i2){
		return (c1 == '^' || c1=='$') ? false : true;
	}
	return (i1 > i2 ) ? true : false;

}
void infixToPostfix(string s){ 
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
            while (!st.empty() && precheck(st.top(),c)) {
                result += st.top();
                st.pop();}
            st.push(c);
    }}
    while (!st.empty()){																								
        result += st.top();
        st.pop();} 																				
    cout << result << endl;
}
int main(){
    string s;
	cout<<"Enter expression : ";
	getline(cin,s);
    infixToPostfix(s);
    return 0;
}