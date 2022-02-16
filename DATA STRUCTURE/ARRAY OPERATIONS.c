#include<stdio.h>
//Function Prototype
void insert(int [], int, int, int);
int Delete(int [], int, int, int);
void traverse(int [],int);
void search(int [],int,int);
//main
int main()
{
	int arr[50];
	int i,ch,len,pos,num;
	printf("Enter the Length of array :");//ARRAY INITILIZATION
	scanf("%d",&len);
	for(i=0;i<len;i++)
	{
		scanf("%d",&arr[i]);
	}
	do{
		printf("Press 1 for Insertion in array :\n");
		printf("Press 2 for Deletion in array :\n");
		printf("Press 3 for Traversing array :\n");
		printf("Press 4 for Searching in array :\n");
		printf("Press 5 for Exit To Program :\n");
		printf("Enter Your Choice :");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("\nInsertion Process......");
				printf("\nEnter Position :");
				scanf("%d",&pos);
				printf("\nEnter Data :");
				scanf("%d",&num);
				insert(arr,len,pos,num);//FUNCTION CALLING
				len = len+1;
				printf("Insertion Process Completed Successfully !!!\n");
				break;
			case 2:
				printf("\nDeletion Process......");
				printf("\nEnter Position :");
				scanf("%d",&pos);
				num = Delete(arr,len,pos,num);//FUNCTION CALLING
				len = len - 1;
				printf("Deletion Process Completed Successfully !!! Deleted Item : %d\n",num);
				break;
			case 3:
				printf("\nTraversing Process......\n");
				traverse(arr, len);//FUNCTION CALLING
				printf("\nTraversing Process Completed Successfully !!!\n");
				break;
			case 4:
				printf("\nSearching Process......\n");
				printf("\nEnter Seaching Data :");
				scanf("%d",&num);
				search(arr,len,num);		//FUCTION CALLING
				printf("\nSearching Process Completed Successfully !!!\n");
				break;
			case 5:
				printf("\nExiting Process......");
				printf("\nExiting Process Completed Successfully !!!");
				break;
			default:
				printf("Your Choice is Invalid ??? Try Again !!!");
				break;
		}
	}while(ch!=5);
	return 0;
}
//FUCTION DEFINITION
void insert(int arr[],int len,int pos,int num)
{
	int i;
	for(i=len-1;i>=pos-1;i--)
	{
		arr[i+1]=arr[i];
	}
	arr[pos-1] = num;
};
int Delete(int arr[],int len,int pos,int num)
{
	int i;
	num = arr[pos-1];
	for(i=pos-1;i<=len;i++)
	{
		arr[i]=arr[i+1];
	}
	return num ;
};
void traverse(int arr[], int len)
{
	int i;
	for(i=0;i<len;i++)
	{
		printf("%d  ",arr[i]);
	}
};
void search(int arr[],int len,int num)
{
	int loc = -1,i=0;
	while(loc == -1 && i < len)
	{
		if(arr[i] == num)
		{
			loc = i+1;
		}
		i++;
	}
	if(loc != -1)
		printf("Element Found at location : %d",loc);
	else
		printf("Element not Found");
};
