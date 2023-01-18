#include<iostream>
using namespace std;
int main(){
	cout<<"enter a no.";
	int a;
	cin>>a;
	for(int i=1;i<=a;i++)
	{
		for(int j=1;j<=a;j++)
		{
			if(j<=a-i)
			cout<<" ";
			else
			cout<<a-j+1;
			cout<<" ";
		}
		
		for(int j=1;j<i;j++)
		cout<<j+1<<" ";
	cout<<endl;
	}
	
	}
