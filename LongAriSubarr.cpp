#include<iostream>
using namespace std;
int main()
{
	int num,i=0;
	cin>>num;
	int a[num];
	for(i;i<num;i++)
	{
		cin>>a[i];
	}
	int pd=a[1]-a[0];
	int current=2;
	for(i=2;i<num;i++)
	{
		if(pd==a[i]-a[i-1])
		{
			current++;
		}
		else
		{
			pd=a[i]-a[i-1];
		}
	}
	cout<<current;
}
