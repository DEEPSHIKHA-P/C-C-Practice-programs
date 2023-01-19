#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter no of elements in array: ";
	cin>>n;
   int a[n];
   cout<<"Enter elements of an array: ";
   for(int i=0;i<n;i++)
   cin>>a[i];
   for(int j=0;j<n-1;j++)
   {
   	for(int k=0;k<n-1-j;k++)
   	{
   		if(a[k]>a[k+1])
   		{
   			int temp=a[k];
   			a[k]=a[k+1];
   			a[k+1]=temp;
		   }
	   }
   }
   for(int h=0;h<n;h++)
   {
   	cout<<a[h]<<" ";
   }
   return 0;
}
