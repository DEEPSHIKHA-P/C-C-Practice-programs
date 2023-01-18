#include<iostream>
using namespace std;

int main()
{
	/*  predecrement:- decrement value first and assign in the end
	       a=a-1;
	       b=a;
	*/
	/*  postdecrement:- assign the value first and after increment 
	       b=a;
	       a=a-1;
	*/
	int a=10,b;
	//code 1
	b=--a; // b=(--a);
	cout<<"code1:\na="<<a<<endl<<"b="<<b;
	//code 2
	a=10;
	b=a--; // b=(a--);
	cout<<endl<<"code2:\na="<<a<<endl<<"b="<<b;
	//code 3
	a=10;
	b=a-- + a--; 
    cout<<endl<<"code3:\na="<<a<<endl<<"b="<<b;
	//code 4
	a=10;
	b=--a + --a;
	cout<<endl<<"code4:\na="<<a<<endl<<"b="<<b;
	//code 5
	a=10;
	b=--a+a--;   
	cout<<endl<<"code5:\na="<<a<<endl<<"b="<<b;
	//code 6
	a=10;
	b=--a + a-- + --a; 
	cout<<endl<<"code6:\na="<<a<<endl<<"b="<<b;
	//code 7
	a=10;
	b=a-- + --a + --a;   
	cout<<endl<<"code7:\na="<<a<<endl<<"b="<<b;
	//code 8
	a=10;
	b=a-- + --a + a--;   
	cout<<endl<<"code8:\na="<<a<<endl<<"b="<<b;
	//code 9
	a=10;   
	cout<<endl<<"code9:\n"<<--a<<endl<<a<<endl<<a--; 
	// solve right to left print left to right 3,3,1
	return 0;
}
