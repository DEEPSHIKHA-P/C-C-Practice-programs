#include<iostream>
using namespace std;
int LinearSearch(int a[],int key,int n);
int BinarySearch(int a[],int key,int n);

int main()
{
	int n;
	cout<<"Enter lenth of an array: ";
	cin>>n;
	int a[n];
	cout<<"\nEnter elements of array: ";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int key1,key2;
	cout<<"\nEnter key for linear search: ";
	cin>>key1;
	cout<<endl<<"element found at position: "<<LinearSearch(a,key1,n);
	cout<<"\nEnter key for binary search: ";
	cin>>key2;
	cout<<endl<<"element found at position: "<<BinarySearch(a,key2,n);
	return 0;
}
int LinearSearch(int a[],int key1,int n)
{
	for(int i=0;i<n;i++)
	{
		if(a[i]==key1)
		return i;
	}
	return -1;
}

int BinarySearch(int a[],int key2,int n)
{
	int s=0,e=n;
	int mid=(s+e)/2;
	while(s<=e)
	{
		if(a[mid]==key2)
		return mid;
		else if(a[mid]>key2)
		e=mid-1;
		else
		s=mid+1;
	}
	return -1;
}


