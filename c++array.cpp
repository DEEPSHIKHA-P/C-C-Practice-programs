#include<iostream>
using namespace std;
int main()
{
	int a[5]={1,2,3,4,5};
	int b[5]={1,1,2,3,4};
	int c[5]={1,2,3,4};
//	int d[5]={1,2,3,4,5,6};            It gives an error
	int d[]={1,2,3,4,5,6,7};
	int e[3]={};
	int f[3]={1};
	int g[3]={[0]=1,[1]=3};
	int h[]={[1]=4};
    for(int i=0;i<5;i++)
    {
    	cout<<g[i]<<" ";
	}
}
