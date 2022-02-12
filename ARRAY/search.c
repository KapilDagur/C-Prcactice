#include<stdio.h>		//Header files

void Search(int [],int,int);		//Function Prototype

//main
int main()
{
	int arr[50],i,len,num;
    printf("Enter The Length Of Array : ");
    scanf("%d",&len);
	for(i = 0; i < len; i++)		//Array Initilization
	{
		scanf("%d",&arr[i]);
	}
	printf("Searching Processing...... wait a sec\n");
	printf("Enter Searching Element : ");
	scanf("%d",&num);
	Search(arr, len,num);		//Function Calling
	printf("\nSearching Completed Successfully");
	return 0;
}

//Function Definition
void Search(int arr[],int len,int num)
{
	int loc=-1,i=0;
	while(loc == -1 && i < len)
	{
		if(arr[i]==num)
		{
			loc = i+1;
		}
		i++;
	}
	if(loc == -1)
		printf("Element Not Found !!!");
	else
		printf("Element Found at Location : %d",loc);
}
