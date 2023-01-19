#include<iostream>
using namespace std;
int main()
{
	int rs,ch=0,r;
	cout<<"Enter rupees: ";
	cin>>rs;
	r=rs;
	while(rs>0)
	{
		ch+=1;
		rs-=1;
		for(int i=1;i<=ch/3;i++)
		{
			if(ch==3*i)
			ch+=1;
		}
	}
	
	cout<<ch;
	return 0;
}
