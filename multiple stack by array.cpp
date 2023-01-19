#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void pushA();
void popA();
void peekA();
void displayA();
void pushB();
void popB();
void peekB();
void displayB();
#define max 6
int stack[max],topA=-1,topB=max;
int main()
{
	int ch;
	do
	{
		printf("\n\n*****Stack Menu*****");
		printf(" 1. pushA\n 2. popA\n 3. peekA\n 4. displayA\n 5. pushB\n 6. popB\n 7. peekB\n 8. displayB\n 9. exit\n\n");
		printf("enter your choice: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				pushA();
				break;
			case 2:
			    popA();
				break;
			case 3:
			    peekA();
			    break;
			case 4:
				displayA();
				break;
			case 5:
			    pushB();
				break;
			case 6:
			    popB();
				break;
			case 7:
			    peekB();
			    break;
			case 8:
				displayB();
				break;
			case 9:
			    exit(0);
			default:
			    printf("incorrect choice!!!");		
		}
	}
	while(ch!=9);
	return 0;
}

void pushA()
{
	int valA;
	if(topA==topB-1)
	printf("\n\nOverflow condition in stack A");
	else
	{
		printf("\n\nEnter a value for insert in Stack A: ");
		scanf("%d",&valA);
		topA=topA+1;
		stack[topA]=valA;
	}
}

void popA()
{
	if(topA==-1)
	printf("\n\nUnderflow condition in stack A");
	else
	{
		printf("\n\nDeleted value from stack A is: %d",stack[topA]);
		topA=topA-1;
	}
}

void peekA()
{
	if(topA==-1)
	printf("\n\nStack A is empty");
	else
	printf("\n\nTopmost element of the stack A is: %d",stack[topA]);
}

void displayA()
{
	int i;
	if(topA==-1)
	printf("\n\nStack A is empty!!!");
	else
	{
		printf("\n\nElements of Stack A is:\n");
		for(i=topA;i>=0;i--)
		{
			printf("%d  ",stack[i]);
		}
	}
}
void pushB()
{
	int valB;
	if(topB==topA+1)
	printf("\n\nOverflow condition in stack B");
	else
	{
		printf("\n\nEnter a value for insert in Stack B: ");
		scanf("%d",&valB);
		topB=topB-1;
		stack[topB]=valB;
	}
}

void popB()
{
	if(topB==max)
	printf("\n\nUnderflow condition in stack B");
	else
	{
		printf("\n\nDeleted value from stack B is: %d",stack[topB]);
		topB=topB+1;
	}
}

void peekB()
{
	if(topB==max)
	printf("\n\nStack B is empty");
	else
	printf("\n\nTopmost element of the stack B is: %d",stack[topB]);
}

void displayB()
{
	int j;
	if(topB==max)
	printf("\n\nStack B is empty!!!");
	else
	{
		printf("\n\nElements of Stack B is:\n");
		for(j=topB;j>=max;j--)
		{
			printf("%d  ",stack[j]);
		}
	}
}
