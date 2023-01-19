#include<iostream>
using namespace std;
#include<algorithm>
int pyth(int x, int y,int z)
{
	int b,c;
	int a=max(x,max(y,z));
	if(a==x)
	{
		b=y;
	    c=z;
	}
	else if(a==y)
	{
		b=x;
		c=z;
	}
	else
	{
		b=x;
		c=y;
	}
	if(a*a==b*b+c*c)
	return true;
	else
	return false;
}
int main()
{
	int x,y,z;
	cout<<"Enter three values: ";
	cin>>x>>y>>z;
	if(pyth(x,y,z))
	{
		cout<<"pythgorian triplet";
	}
	else
	cout<<"not pythgorian triplet";
	return 0;
}
