/*
      1
     1 2
    1 2 3
   1 2 3 4
  1 2 3 4 5
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
			//if(j<=a-i)
			cout<<" ";
			//else
			}
		for(int j=1;j<=i;j++)	
			cout<<j<<" ";	
			
		
		cout<<endl;
	}
	}
