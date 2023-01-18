#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"Enter two variables: ";
	cin>>a>>b;
	a=(a+b)-(b=a);
	cout<<"a="<<a<<" b="<<b;
	return 0;
}
