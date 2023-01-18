#include<iostream>
using namespace std;

int main()
{
	/*  preincrement:- increment value first and assign in the end
	       a=a+1;
	       b=a;
	*/
	/*  postincrement:- assign the value first and after increment 
	       b=a;
	       a=a+1;
	*/
	int a=1,b;
	//code 1
	b=++a; // b=(++a);
	cout<<"code1:\na="<<a<<endl<<"b="<<b;
	//code 2
	a=1;
	b=a++; // b=(a++);
	cout<<endl<<"code2:\na="<<a<<endl<<"b="<<b;
	//code 3
	a=1;
	b=a++ + a++; 
    cout<<endl<<"code3:\na="<<a<<endl<<"b="<<b;
	//code 4
	a=1;
	b=++a + ++a;
	 /*we have to include space between ++a and ++a (in add operation) otherwise gets an error. 
	b=++a+ ++a; also works but b=++a +++a; does not work */
	cout<<endl<<"code4:\na="<<a<<endl<<"b="<<b;
	//code 5
	a=1;
	b=++a-++a;
	//code 6
	a=1;
	b=++a+a++;   //inc a=2, assign value to right a=2, assign value to left a=3
	cout<<endl<<"code6:\na="<<a<<endl<<"b="<<b;
	//code 7
	a=1;
	b=++a + a++ + ++a; 
	/* execution steps:
	b=(++a + a++) + ++a;
	b=(a+2)+ ++a;
	b=(3+2)+ 4;
	*/
	cout<<endl<<"code7:\na="<<a<<endl<<"b="<<b;
	//code 8
	a=1;
	b=a++ + ++a + ++a;   
	cout<<endl<<"code8:\na="<<a<<endl<<"b="<<b;
	//code 9
	a=1;
	b=a++ + ++a + a++;   
	cout<<endl<<"code9:\na="<<a<<endl<<"b="<<b;
	//code 10
	a=1;   
	cout<<endl<<"code10:\n"<<++a<<endl<<a<<a++; 
	// solve right to left print left to right 3,3,1
	return 0;
}
