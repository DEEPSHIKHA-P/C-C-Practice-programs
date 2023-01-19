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
		friend class Product;
};
class Product
{
	int m,n;
	public:
		Product(){}
		Product(Item i)
		{
			m=i.a;
			n=i.b;
		}
		void PrintData()
		{
			cout<<"\nm="<<m<<" n="<<n;
		}
};
int main()
{
	Item i1;
	Product p1;
	i1.SetData(3,4);
	i1.ShowData();
	p1=i1;
	p1.PrintData();
	return 0;
}
