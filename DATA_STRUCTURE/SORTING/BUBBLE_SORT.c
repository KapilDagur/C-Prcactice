//Bubble Sorting....
#include<stdio.h>
#define MAXSIZE 50

//MAIN()
int main()
{
	int i,j,len,arr[MAXSIZE];
	printf("ENTER TOTAL NO. OF ELEMENT : ");
	scanf("%d",&len);
	for(i=0;i<len;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<len-1;i++)
	{
		int flag = 0;
		for(j=0;j<len-1-i;j++)
		{
			if(arr[j] > arr[j+1])
			{
				flag++;
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
		if(flag == 0)
		{
			printf("%d\n",i);
			break;
		}
	}
	for(i=0;i<len;i++)
	{
		printf("%d\t",arr[i]);
	}
	return 0;
}
