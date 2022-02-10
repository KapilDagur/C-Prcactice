#include<stdio.h>

int main()
{
	int i,j,arr1[20][20],arr2[20][20],sum[20][20],row1,col1,row2,col2;
	printf("Enter ROW and COLUMN :");
	scanf("%d%d",&row1,&col1);
	for(i=0;i<row1;i++)		//MATRIX 1st
	{
		for(j=0;j<col1;j++)
		{
		scanf("%d",&arr1[i][j]);
		}
		printf("\n");
	}
	printf("Enter ROW and COLUMN :");
	scanf("%d%d",&row2,&col2);
	for(i=0;i<row2;i++)		//MATRIX 2nd
	{
		for(j=0;j<col2;j++)
		{
		scanf("%d",&arr2[i][j]);
		}
		printf("\n");
	}
	if(row1 == row2 && col1 == col2)
	{
	
		for(i=0;i<row1;i++)		//ADD MATRIX
		{
			for(j=0;j<col1;j++)
			{
				sum[i][j] = arr1[i][j] + arr2[i][j];
			}
		}
		printf("The sum of the array :\n");
		for(i=0;i<row1;i++)		//PRINTING MATRIX
		{
			for(j=0;j<col1;j++)
			{
				printf("%d ",sum[i][j]);
			}
			printf("\n");
		}
	}
	else
		printf("ADDITION OF GIVEN MATRIX IS NOT POSSIBLE!!!");
	return 0;
}
