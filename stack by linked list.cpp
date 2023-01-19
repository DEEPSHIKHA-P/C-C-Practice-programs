#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<malloc.h>
struct node
{
	int data;
	struct node *next;
};
struct node *S;
struct node* create_node()
{
	struct node *n;
	n=(struct node*)malloc(sizeof(struct node));
	return(n);
}
void push(struct node **S,int val)
{
	struct node *m;
	m=create_node();
	if(m!=NULL)
	{
		m->data=val;
		m->next=*S;
		*S=m;
	}
}
int peek(struct node **S)
{
	if(*S==NULL)
	{
		printf("Stack is empty!!!");
		return;
	}
	else
	return((*S)->data);
}
void pop(struct node **S)
{
	int item;
	struct node *r;
	if(*S==NULL)
	{
		printf("Underflow condition!!!");
		return;
	}
	else
	{
		item=*S->data;
		r=*S;
		*S=r->next;
		free(r);
	}
}
void display(struct node **S)
{
	int i;
	if(*S==NULL)
	printf("Stack is empty!!!");
	else
	{
		printf("Elements of the Stack is: ");
	    while(*S!=NULL)
	    {
	    	printf("%d  ",*S->data);
		}
    } 
}
int main()
{
	int ch
	do
	{
		printf("\n\n*****Stack menu*****");
		printf("\ n1. Push\n 2. Pop\n 3. Peek\n 4. Display\n 5. exit\n\n");
		printf("Enter your choice: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				push
		}
	}
}
