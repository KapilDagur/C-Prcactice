#include<stdio.h>       //Header Files

int DELETE(int [],int,int);     //Function Prototype

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
	printf("Deletion Processing......... wait a sec\n");
	printf("Enter Position : ");
	scanf("%d",&pos);
    num = DELETE(arr,len,pos);        //Function Calling
	len = len - 1;
	printf("Deletion Processing Completed Successfully !!!\nDeleted Element : %d",num);
	printf("\n\nPress 1 for View array :");
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
int DELETE(int arr[],int len,int pos)
{
	int i,item;
	item = arr[pos-1];
	for(i=pos-1;i<=len;i++)
	{
		arr[i]=arr[i+1];
	}
	return item ;
};
