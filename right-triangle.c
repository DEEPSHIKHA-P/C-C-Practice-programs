#include<stdio.h>
int main()
{
	int i,j,n;
	while(1){
	printf("Enter how tall the pyramids should be?");
	scanf("%d",&n);
	if(1<=n&&n<=8)
	{
	 for(i=1;i<=n;i++)
	 {
		 for(j=1;j<=i;j++)
		 
			 printf("# ");
		 
		 printf("\n");
}
	 break;
	 
}
}
return 0;
}

