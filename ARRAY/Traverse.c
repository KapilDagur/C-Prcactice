#include<stdio.h>       //Header Files

void Traverse(int [],int);     //Function Prototype

//main
int main()
{
    int arr[50],i,len;
    printf("Enter The Length Of Array : ");
    scanf("%d",&len);
	for(i = 0; i < len; i++)		//Array Initilization
	{
		scanf("%d",&arr[i]);
	}
	printf("Traversing Processing...... wait a sec\n");
	Traverse(arr, len);		//Function Calling
	printf("\nTraversing Completed Successfully");
	return 0;
}

//Function Definition
void Traverse(int arr[],int len)
{
	int i;
	printf("Array Elements Are As Follow :::...\n");
	for(i=0;i<len;i++)
	{
		printf("%d\t",arr[i]);
	}
}
