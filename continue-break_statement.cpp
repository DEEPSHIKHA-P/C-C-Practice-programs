#include<iostream>
using namespace std;
int main()
{
	int PocketMoney=3000;
	for(int date=1;date<=30;date++)
	{
		if(date%2==0)
		continue;
		if(PocketMoney==0)
		break;
		cout<<"Date="<<date<<": Go out today!"<<" with pocket money "<<PocketMoney<<endl;
		PocketMoney=PocketMoney-300;
	}
	return 0;
}
