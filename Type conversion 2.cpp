#include<iostream>
#include<conio.h>
using namespace std;
class Item
{
	int a,b;
	public:
		void SetData(int x,int y)
		{
			a=x;
			b=y;
		}
		void ShowData()
		{
			cout<<"\na="<<a<<" b="<<b;
		}
		operator int()
		{
			return b;
		}
};
int main()
{
	Item i1;
	i1.SetData(3,4);
	i1.ShowData();
	int x;
	x=i1;
	cout<<"\nx="<<x;
	return 0;
}
