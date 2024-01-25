#include<iostream>
using namespace std;
void solution(int disk,string first,string third,string temp){
	if(disk==0)
	return;
	solution(disk-1,first,temp,third);
	cout<<"Move disk "<<disk<<" from "<<first<<" to "<<third<<endl;
	solution(disk-1,temp,third,first);
}
int main(){
	int x;
	cout<<"Enter total number of disks : ";
	cin>>x;
	solution(x,"First","Third","Second");
}