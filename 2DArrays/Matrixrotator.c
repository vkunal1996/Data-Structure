#include<stdio.h>
int main()
{
	int rows,columns;
	int i,j;
	int a[100][100];

	printf("Enter the Size of the Square Matrix ");
	scanf("%d%d",&rows,&columns);

		for(i=0;i<rows;i++)
		{
			for(j=0;j<columns;j++)
			{
				scanf("%d",&a[i][j]);
			}
		}
		printf("Matrix after Rotating 90 Degree Anti Clockwise \n");
		for(j=columns-1;j>=0;j--)
		{
			for(i=0;i<rows;i++)
			{
				printf("%d ",a[i][j]);
			}

			printf("\n");
		}

		printf("Matrix after Rotating 90 Degree Clockwise \n");

		for(j=0;j<columns;j++)
		{
			for(i=rows-1;i>=0;i--)
			{
				printf("%d ",a[i][j]);
			}
			printf("\n");
		}
return 0;
}

