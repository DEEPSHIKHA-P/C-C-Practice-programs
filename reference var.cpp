#include<iostream>
using namespace std;
int main()
{
	float a=10,z=5,y;
	float *b=&a;
	float&d=a;
	y=z;
	cout<<"&z="<<&z<<endl;
	cout<<"&y="<<&y<<endl;
	cout<<"*B="<<*b<<endl;
	cout<<"&D="<<&d<<endl;
	cout<<"A="<<a<<endl;
	cout<<"D="<<d<<endl;
	d++;
	cout<<"A="<<a<<endl;
	cout<<"D="<<d<<endl;
	a++;
	cout<<"A="<<a<<endl;
	cout<<"D="<<d<<endl;
	cout<<"B="<<b<<endl;
	cout<<"*B="<<*b<<endl;
	cout<<"&D="<<&d<<endl;
	cout<<"&A="<<&a<<endl;
	cout<<"&B="<<&b<<endl;
	(*b)++;
	cout<<"*B="<<*b<<endl;
	cout<<"A="<<a<<endl;
	b++;
	cout<<"*B="<<*b<<endl;
	cout<<"&B="<<b<<endl;
	cout<<"&A="<<&a<<endl;
	return 0;
}
