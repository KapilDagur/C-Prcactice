#include<stdio.h>       //Header Files

void insert(int [],int,int,int);     //Function Prototype

//main
int main()
{
    int arr[50],i,len,pos,num;
    printf("Enter The Length Of Array : ");
    scanf("%d",&len);
	for(i = 0; i < len; i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Insertion Processing......... wait a sec\n");
	printf("Enter Position : ");
	scanf("%d",&pos);
	printf("Enter Inserting Element : ");
	scanf("%d",&num);
    insert(arr,len,pos,num);        //Function Calling
	len = len + 1;
	printf("Insertion Processing Completed Successfully !!!");
	printf("\n\n\nPress 1 for View array :");
	int ch;
	scanf("%d",&ch);
	if(ch == 1)
	{
		printf("Array Element as Follow :::... \n");
		for(i = 0; i < len; i++)
		{
			printf("%d\t",arr[i]);
		}
	}
	else
	{
		printf("\nYour Choice is Invalid");
	}
	return 0;
}

//Function Definition
void insert(int arr[],int len,int pos,int num)
{
	int i;
	for(i=len-1;i>=pos-1;i--)
	{
		arr[i+1]=arr[i];
	}
	arr[pos-1] = num;
};
