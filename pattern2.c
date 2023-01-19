#include<stdio.h>
#include<conio.h>
int main()
{
	int row,column,no_rows,no_column;
	printf("Enter the number of rows: ");
	scanf("%d",&no_rows);
	printf("Enter the number of column: ");
	scanf("%d",&no_column);
	for(row=1;row<=no_rows;row++)
	{
		for(column=1;column<=no_column;column++) //ASCII value of A=65, a=97
		{
			printf("%d ",row); //for printing in form ABCD use printf("%c ",(64+column));
		}
		printf("\n");
	}
	getch();
}
