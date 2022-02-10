#include<stdio.h>

void main()
{
	int i,j,arr1[20][20],arr2[20][20],sum[20][20],ord;
	printf("Enter the order of array : ");
	scanf("%d",&ord);
	for(i=0;i<ord;i++)
	{
		for(j=0;j<ord;j++)
		{
		scanf("%d",&arr1[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<ord;i++)
	{
		for(j=0;j<ord;j++)
		{
		scanf("%d",&arr2[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<ord;i++)
	{
		for(j=0;j<ord;j++)
		{
			sum[i][j] = arr1[i][j] + arr2[i][j];
		}
	}
	printf("The sum of the array :\n");
	for(i=0;i<ord;i++)
	{
		for(j=0;j<ord;j++)
		{
			printf("%d ",sum[i][j]);
		}
		printf("\n");
	}
	getch();
}
