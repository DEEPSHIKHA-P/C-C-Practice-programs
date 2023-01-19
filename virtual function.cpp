#include<iostream>
#include<conio.h>
using namespace std;
class Base
{
	public:
		void Display()
		{
			cout<<"\nDisplay base";
		}
		virtual void Show()
		{
			cout<<"\nShow base";
		}
};
class Derived:public Base
{
	public:
		void Display()
		{
			cout<<"\nDisplay derived";
		}
		void Show()
		{
			cout<<"\nShow derived";
		}
};
int main()
{
	Base b1,*ptr;
	Derived d1;
	cout<<"\nptr points to Base\n";
	ptr=&b1;
	ptr->Display();
	ptr->Show();
	cout<<"\nptr points to Derived\n";
	ptr=&d1;
	ptr->Display();
	ptr->Show();
	return 0;
}
