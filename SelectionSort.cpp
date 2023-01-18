#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void SelectionSort(int n, int arr[])
{
	for(int i=0;i<n-1;i++){
		int min=i;
	for(int j=i+1;j<n;j++)
	{
		if(arr[j]<arr[min])
		min=j;
	}
	if(min!=i)
	{
	/*	int temp=i;
		i=min;
		min=temp;*/
		swap(arr,min,i);
	}

}
for(int i=0;i<n;i++)
{
	cout<<arr[i]<<" ";
}
}
int main()
{
	int a;
	cout<<"no of elements: ";
	cin>>a;
	int arr[a];
	cout<<"ele: ";
	for(int i=0;i<a;i++)
	{
		cin>>arr[i];
	}
	SelectionSort(a,arr);
}
