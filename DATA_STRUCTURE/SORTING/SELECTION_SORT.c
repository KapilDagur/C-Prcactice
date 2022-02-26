//Selection Sorting.....
#include<stdio.h>
#define MAXSIZE 50

//MAIN()
int main()
{
	int i,j,len,min,arr[MAXSIZE];
	printf("ENTER TOTAL NO. OF ELEMENT : ");
	scanf("%d",&len);
	for(i=0;i<len;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<len-1;i++)
	{
		min = i;
		for(j=i+1;j<len;j++)
		{
			if(arr[j] < arr[min])
			{
				min = j;
			}
		}
		if(i != min)
		{
			int temp = arr[min];
			arr[min] = arr[i];
			arr[i] = temp;
		}
	}
	for(i=0;i<len;i++)
	{
		printf("%d\t",arr[i]);
	}
	return 0;
}
