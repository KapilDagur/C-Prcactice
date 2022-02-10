#include<stdio.h>

int main()
{
	int arr1[20][20],arr2[20][20],mul[20][20],i,j,k,row1,col1,row2,col2;
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
	if(col1 == row2)
	{
	
		for(i=0;i<row1;i++)		//MULTIPLICATION OF MATRIX
		{
			for(j=0;j<col2;j++)
			{
				int sum = 0;
				for(k=0;k<row2;k++)
				{
					sum += arr1[i][k]*arr2[k][j];
				}
				mul[i][j] = sum;
			}
		}
		printf("The sum of the array :\n");
		for(i=0;i<row1;i++)		//PRINTING MATRIX
		{
			for(j=0;j<col2;j++)
			{
				printf("%d ",mul[i][j]);
			}
			printf("\n");
		}
	}
	else
		printf("MULTIPLACTION OF GIVEN MATRIX IS NOT POSSIBLE!!!");
	return 0;
}
