#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"Enter a number: ";
	cin>>num;
	if(num>0)
	cout<<num<<" is positive";
	else
	cout<<num<<" is negative";
	//num>0?cout<<"\npositive":cout<<"\nnegative";   //by ternary operator
	return 0;
}
