#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int num,sum=0,prev_num,rem;
	cout<<"enter a number: ";
	cin>>num;
	prev_num=num;
	while(num>0){
	rem=num%10;
	//sum+=rem*rem*rem;
	sum+=pow(rem,3);
	num=num/10;
}
	if(prev_num==sum)
	cout<<"armstrong number";
    else
	cout<<"not armstrong number";
	return 0;
}
