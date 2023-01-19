#include<iostream>
using namespace std;
#include<climits>
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int min_no=INT_MAX;
	int max_no=INT_MIN;
	for(int j=0;j<n;j++)
	{
		if(a[j]>max_no)
		max_no=a[j];
		if(a[j]<min_no)
		min_no=a[j];
	}
	cout<<min_no<<" "<<max_no;
	return 0;
}
