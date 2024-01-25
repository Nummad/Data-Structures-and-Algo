#include<bits/stdc++.h>
using namespace std;
int main(){
	queue<float> q;
	q.push(1);
	q.push(2);
	q.push(3);
	q.push(5);
	q.push(5);
	float sum=0,total=q.size();
	while(!q.empty()){
		sum+=q.front();
		q.pop();
	}
	cout<<"Average is : "<<sum/total;
}