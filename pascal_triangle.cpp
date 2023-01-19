#include<iostream>
using namespace std;
int fact(int num)
{
	int factorial=1;
	for(int i=2;i<=num;i++)
	{
		factorial*=i;}
	return factorial;
}
int main()
{
	int i,j;
	cout<<"Enter number of rows and columns: ";
	cin>>i>>j;
	for(int row=0;row<i;row++)
	{
		for(int column=0;column<=row;column++)
		{
			int val=fact(row)/(fact(column)*fact(row-column));
				cout<<val<<" ";
		}
		cout<<endl;
	}
}
