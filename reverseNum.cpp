#include<iostream>
using namespace std;
int main()
{
	int num,rem,sum=0;
	cout<<"Enter a number for reverse: ";
	cin>>num;
	while(num!=0)
	{
		rem=num%10;
		num=num/10;
		sum=sum*10+rem;
	}
	cout<<sum;
	return 0;
}
