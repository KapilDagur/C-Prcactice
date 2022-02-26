//Insertion Sorting...
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
	i = 1;
	while(i<len)
	{
		int temp = arr[i];
		j = i - 1;
		while(( j >= 0 ) && ( arr[j] > temp ))
		{
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] = temp;
		i++;
	}
	for(i=0;i<len;i++)
	{
		printf("%d\t",arr[i]);
	}
	return 0;
}
