#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cin>>a>>b;
	//SWAP USING THIRD VARIABLE
	int c;
	c=a;
	a=b;
	b=c;
	cout<<a<<" "<<b<<endl;
	//SWAP WITHOUT USING THIRD VARIABLE
	int a1,a2;
	cin>>a1>>a2;
	a2=a1+a2;
	a1=a2-a1;
	a2=a2-a1;
	cout<<a1<<" "<<a2<<endl;
	return 0;
	
}
