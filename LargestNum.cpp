// find largest number
#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Enter three numbers for find largest number: ";
	cin>>a>>b>>c;
	if(a>b)
	{
		if(a>c)
		cout<<"Largest num = "<<a;
		else
		cout<<"Largest num = "<<c;
	}
	else
	{
		if(b>c)
		cout<<"Largest num = "<<b;
		else
		cout<<"Largest num = "<<c;
	}
	return 0;
}
