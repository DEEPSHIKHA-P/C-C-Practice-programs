#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void push();
void pop();
void peek();
void display();
#define max 5
int A[max],top=-1;
int main()
{
	int ch;
	do
	{
		printf("\n\n*****Stack Menu*****");
		printf(" 1. push\n 2. pop\n 3. peek\n 4. display\n 5. exit\n\n");
		printf("enter your choice: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				push();
				break;
			case 2:
			    pop();
				break;
			case 3:
			    peek();
			    break;
			case 4:
				display();
				break;
			case 5:
			    exit(0);
			default:
			    printf("incorrect choice!!!");		
		}
	}
	while(ch!=5);
	return 0;
}

void push()
{
	int val;
	if(top==max-1)
	printf("\n\nOverflow condition");
	else
	{
		printf("\n\nEnter a value for insert in Stack: ");
		scanf("%d",&val);
		top=top+1;
		A[top]=val;
	}
}

void pop()
{
	if(top==-1)
	printf("\n\nUnderflow condition");
	else
	{
		printf("\n\nDeleted value is: %d",A[top]);
		top=top-1;
	}
}

void peek()
{
	if(top==-1)
	printf("\n\nStack is empty");
	else
	printf("\n\nTopmost element of the stack is: %d",A[top]);
}

void display()
{
	int i;
	if(top==-1)
	printf("\n\nStack is empty!!!");
	else
	{
		printf("\n\nElements of Stack is:\n");
		for(i=top;i>=0;i--)
		{
			printf("%d  ",A[i]);
		}
	}
}
