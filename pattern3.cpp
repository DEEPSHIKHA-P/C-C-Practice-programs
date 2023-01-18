/*
    *****
   *****
  *****
 *****
*****
*/
#include<iostream>
using namespace std;
int main(){
	cout<<"enter a no.";
	int a;
	cin>>a;
	for(int i=1;i<=a;i++)
	{
		for(int j=1;j<=a-i;j++)
		{
			cout<<" ";
		}
		for(int j=1;j<=a;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
}
