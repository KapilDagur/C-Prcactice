//Linear Searching.....
#include<stdio.h>
#define MAXSIZE 50

int main()
{
	int i,n,num,loc=-1,array[MAXSIZE];
	printf("ENTER TOTAL NUMBER OF ELEMENTS : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}
	printf("Enter Element Which You want to findout : ");
	scanf("%d",&num);
	for(i=0;i<n;i++)
	{
		if(num == array[i])
		{
			loc = i+1;
		}
	}
	if(loc == -1)
	{
		printf("Element Not EXIST !!! ");
	}
	else
	{
		printf("Element Found At Location : %d",loc);
	}
	return 0;
}
