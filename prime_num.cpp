/*#include<iostream>
using namespace std;
#include<cmath>
int main()
{
	int num;
	cout<<"enter a number: ";
	cin>>num;
	bool flag=0;
	for(int i=2;i<=sqrt(num);i++)
	{
		if(num%i==0)
		{
			flag=1;
			printf("non prime");
			break;
		}
	}
	if(flag==0)
	printf("prime");
	return 0;
}*/

//Using function
#include<iostream>
#include<math.h>
using namespace std;
bool isPrime(int num)
{
	for(int i=2;i<=sqrt(num);i++){
	if(num%i==0)
	return false;}
	return true;
}
int main()
{
	int num;
	cout<<"enter a number: ";
	cin>>num;
	if(isPrime(num))
	cout<<"prime number";
	else
	cout<<"non prime";
return 0;
}
