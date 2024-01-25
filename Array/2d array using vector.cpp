#include <bits/stdc++.h>
using namespace std;
void display(vector<vector<int>> & ch){	
		for(int i=0; i<2; i++){
		for (int j = 0; j < 2; j++){
				cout<< ch[i][j]<<"   ";}
				cout <<endl;}}

int main(){
vector<vector<int> > ch={{1,2},{3,4}};
	display(ch);          
	return 0;
}