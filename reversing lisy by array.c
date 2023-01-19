#include<stdio.h>
#include<conio.h>
#define max 10
int stack[max],top=-1;
void push(int);
int pop();
int main()
{
	int n,arr[10],i,value;
	printf("Enter the number of elements for insert in array: ");
	scanf("%d",&n);
	printf("\n\nEnter the elements in the array: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
	    push(stack[i]);
	}
	for(i=0;i<n;i++)
	{
		value=pop();
		arr[i]=value;
		printf("%d  ",arr[i]);
	}
	printf("\n\nArray after reversing a list:\n");
	for(i=0;i<n;i++)
	{
		printf("%d  ",arr[i]);
	}
	return 0;
}
void push(int value)
{
	stack[++top]=value;
}
int pop()
{
    return(stack[top]);
}
