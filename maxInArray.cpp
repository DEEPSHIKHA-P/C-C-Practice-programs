#include<iostream>
#include<limits.h>
#include<algorithm>
using namespace std;
int main()
{
	int num,maxno=INT_MIN,i=0;
	cin>>num;
	int a[num];
	for(i;i<num;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<num;i++)
	{
		maxno=max(maxno,a[i]);
		cout<<maxno<<" ";
	}
	return 0;
}
