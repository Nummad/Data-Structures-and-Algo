#include<iostream>
using namespace std;
int pascal(int,int);
void space(int,int);

main()
{
	int num,i,j;
	cout<<"Enter the no. of rows : ";
	cin>>num;
	for(i=1;i<=num;i++)
	{
		space(num-i,3);
		for(j=1;j<=i;j++)
		{
			cout<<"  "<<pascal(i,j);
			space(1,3);
		}
		cout<<endl;	
	}
}

int pascal(int row,int column){
	if(column==0)
		return 0;
	else if(row==1&&column==1)
		return 1;
	else if(column>row)
		return 0;
	else
		return (pascal(row-1,column-1)+pascal(row-1,column));
}

void space(int x,int y){
	int i;
	x*=y;
	for(i=0;i<x;i++)
		cout<<" ";
}