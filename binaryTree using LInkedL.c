#include<stdio.h>
#include<conio.h>
#include<malloc.h>

struct node
{
	struct node *left,*right;
	char data;
};
struct node *ConstructTree(int);
void Inorder(struct node *);

char array[]={'A','B','C','D','E','F','G','\0','H'};
int LeftCount[]={1,3,5,-1,9,-1,-1,-1,-1};
int RightCount[]={2,4,6,-1,-1,-1,-1,-1,-1,-1};

int main()
{
	struct node *root;
	root=ConstructTree(0);
	printf("\nOrder Traversal\n");
	Inorder(root);
	getch();
	return(0);
}

struct node *ConstructTree(int index)
{
	struct node *temp=NULL;
	if(index!=-1)
	{
		temp=(struct node *)malloc(sizeof(struct node));
		temp->data=array[index];
		temp->left=ConstructTree(LeftCount[index]);
		temp->right=ConstructTree(RightCount[index]);
	}
	return(temp);
}

void Inorder(struct node *root)
{
	if(root!=NULL)
	{
		printf("%c\t",root->data);
		Inorder(root->right);
		Inorder(root->left);
	}
}
