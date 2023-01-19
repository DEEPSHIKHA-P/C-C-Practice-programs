#include<stdio.h>
int main()
{
	int a[10]={20,23,25,30,46,50,51,55,60,69},item,high,low,mid;
	printf("Enter element for binary searching: ");
	scanf("%d",&item);
	low=0;
	high=9;
	while(low<=high)
	{
	mid=(low+high)/2;
	 if(item==a[mid])
	{
		printf("\nSearching element is: %d at position %d: \n",a[mid],mid+1);
		break;
	}
	 else if(item>a[mid])
	{
		low=mid+1;
	}
	else if(item<a[mid])
	{
		high=mid-1;
		
	}
	/*	else{
		
	printf("\nElement does not exist in the array!!");
	
	}*/
	if(low>high)
	printf("not exist");
}
	return 0;
}

