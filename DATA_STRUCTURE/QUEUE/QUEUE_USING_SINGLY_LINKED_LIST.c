//QUEUE USING SINGLY LINKED LIST
#include<stdio.h>
#include<stdlib.h>

//Structur.....
struct Node
{
	int Data;
	struct Node *Next;
};
typedef struct Node NODE;

int main()
{
	NODE *start, *front, *rear, *p;
	start = NULL;
	front = NULL;
	rear = NULL;
	p = NULL;
	int op,item;
	do
	{
		printf("\nPress 1 For Insertion : \n");
		printf("Press 2 For Deletion : \n");
		printf("Press 3 For Traverse : \n");
		printf("Press 4 For Exit :\n");
		printf("ENTER YOUR CHOICE : \n");
		scanf("%d",&op);
		switch(op)
		{
			case 1:
				printf("\n---------------------::::INSERTION OPERATION ::::-----------------------\n");
				p = (NODE*)malloc(sizeof(NODE));
				if(p == NULL)
				{
					printf("Memory Allocation Unsucessfull !!! Try Again !!!\n");
				}
				else
				{
					printf("Enter Data : ");
					scanf("%d",&item);
					p->Data = item;
					p->Next = NULL;
					if(start == NULL)
					{
						start = p;
						front = p;
						rear = p;
					}
					else
					{
						rear->Next = p;
						rear = rear->Next;
					}
				}
				break;
				
			case 2:
				printf("------------------------:::: DELETION OPERATION ::::------------------------\n");
				p = front;
				if(start == NULL)
				{
					printf("UNDERFLOW CONDITION !!! DELETION NOT POSSIBLE !!!");

				}
				else
				{
					item = p->Data;
					if(front == rear)
					{
						front = NULL;
						start = NULL;
						rear = NULL;
					}
					else
					{
						front = front->Next;
						start = front;
					}
					free(p);
					printf("DELETED ELEMENT : %d",item);
				}
				break;
				
			case 3:
				printf("------------------------:::: TRAVERSE OPERATION ::::------------------------\n");
				if(front == NULL)
				{
					printf("UNDERFLOW CONDITION !!! TRAVERSING NOT POSSOBLE !!!");	
				}	
				else
				{
					p = front;
					while (p != NULL)
					{
						printf("%d\t",p->Data);
						p = p->Next;
					}
				}
				break;
				
			case 4:
				printf("------------------------:::: EXIT ::::------------------------\n");
				p = front;
				while(front != NULL)
				{
					p = front;
					front = front->Next;
					free(p);
				}
				break;
				
			default:
				printf("\nYOUR CHOICE IS INVALID !!! Try Again!!!\n");
		}
		p = NULL;
	}while(op != 4);
	printf("\n\t\t\tTHANK YOU\n\t\t\tNICE TO MEET YOU!!!");
	return 0;
}
