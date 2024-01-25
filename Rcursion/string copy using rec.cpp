// Write a program in C to copy One string to another using recursion.

#include<iostream>
#include<string>
using namespace std;
void copy(char str1[],char str2[],int index);
int main(){
	char str[100],str1[100];
	cout<<"Enter string to copy : ";
	cin.getline(str,100);
	copy(str,str1,0);
	cout<<"Copied string is : "<<str1<<endl;
}
void copy(char str1[],char str2[],int index){			//Nummad 
		str2[index]=str1[index];
	if(str1[index]=='\0')
		return;
		copy(str1,str2,index+1);
}