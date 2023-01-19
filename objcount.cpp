#include<iostream>
using namespace std;
class test
{
	int ObjNo;
	static int ObjCount;
	public:
		test()
		{
			ObjNo=++ObjCount;
		}
		~test()
		{
			--ObjCount;
		}
		void PrintObjNumber()
		{
			cout<<"\nObject number: "<<ObjNo<<endl;
		}
		static void PrintObjCount()
		{
			cout<<"count: "<<ObjCount<<endl;
		}
};
int test::ObjCount;
int main()
{
	test t1,t2;
	test::PrintObjCount();
	test t3;
	test::PrintObjCount();
	t1.PrintObjNumber();
	t2.PrintObjNumber();
	t3.PrintObjNumber();
	return 0;
}
