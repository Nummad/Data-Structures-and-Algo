#include<iostream>
using namespace std;
class stack{
	int *arr;
	int total=-1;
	int Size;
	public:
		stack(int s):Size(s){
			arr=new int[Size];
		}
		void push(int val){
			if(total < Size){
				total++;
				arr[total]=val;
			}
		}
		void pop(){
			if(total>-1){
				total--;
			}
		}
		int size(){
			return total+1;
		}
		int top(){
			return arr[total];
		}
		bool empty(){
			if(total == -1)
				return true;
			return false; 	
		}
};
int main(){
	stack s(10);
	s.push(11);
	s.push(22);
	s.push(33);
	s.push(44);
	s.push(55);
	s.push(66);
	while(!s.empty()){
		cout<<s.top()<<endl;
		s.pop();
	}
}