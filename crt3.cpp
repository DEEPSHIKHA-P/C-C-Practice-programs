#include<iostream>
using namespace std;
int main()
{
	int i,j=0;
	for(i=1;i<=5;)
	{
		if(j<i){
		printf("* ");
		j++;
	}
	if(i==j)
	{
		printf("\n");
		i++;
		j=0;
	}
		
	}
	return 0;
}
