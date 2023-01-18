#include<iostream>
using namespace std;
void InsertionSort(int n,int arr[])
{
 for(int i=1;i<n;i++){
		int temp=arr[i];
	int j=i-1;
	for(;j>=0;j--){
	if(arr[j]>temp)
	{
		//shift
		arr[j+1]=arr[j];
	}
	else
	break;
}
	arr[j+1]=temp;
}
for(int i=1;i<=n;i++)
{
	cout<<arr[i]<<" ";
	}	
}
int main()
{
	int n;
	cout<<"no. of elements: ";
	cin>>n;
	int arr[n];
	for(int i=1;i<=n;i++)
	{
		cin>>arr[i];
	}
	InsertionSort(n,arr);
	
}

