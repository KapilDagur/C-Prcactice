//Stack Using Doubly Linked List
#include<stdio.h>
#include<stdlib.h>

//Structure
struct Node
{
	struct Node *Prev;
	int Data;
	struct Node *Next;
};
typedef struct Node NODE;

//MAIN()
int main()
{
	NODE *start,*TOP,*p;
	start = NULL;//NULL Pointer
	p = NULL;//NULL Pointer
	int ch,item;
	do
	{
		printf("\nPress 1 For PUSH OPERATION : \n");
		printf("Press 2 For POP OPERATION : \n");
		printf("Press 3 For TRAVERSE OPERATION : \n");
		printf("Press 4 For Exit : \n");
		printf("ENTER YOUR CHOICE : ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("-------------------------:::: PUSH OPERATION ::::-------------------------\n");
				p = (NODE *)malloc(sizeof(NODE));
				if(p == NULL)
				{
					printf("Memory Allocation Unsuccessfull !!! Try Again !!!\n");
				}
				else
				{
					p->Prev = NULL;
					p->Next = NULL;
					
					printf("Enter Data : ");
					scanf("%d",&item);
					if(start == NULL)
					{
						start = p;
						p->Data = item;
						TOP = p;	
					}
					else
					{
						TOP->Next = p;
						p->Data = item;
						p->Prev = TOP;
						TOP = p;
					}
				}
				break;
				
			case 2:
				printf("-------------------------:::: POP OPERATION ::::-------------------------\n");
				if(start == NULL)
				{
					printf("UnderFlow Condition !!! Stack is Empty !!!\n");
				}
				else
				{
					p = TOP;
					item = p->Data;
					if(p->Prev == NULL)
					{
						start = NULL;
						TOP = NULL;
					}
					else
					{
						TOP = TOP->Prev;
						p->Prev = NULL;
					}
					printf("DELETED DATA : %d\n",item);
					free(p);
				}
				
				break;
				
			case 3:
				printf("-------------------------:::: TRAVERSE OPERATION ::::-------------------------\n");
				p = TOP;
				if(p == NULL)
				{
					printf("UnderFlow Condition !!! Stack Is Empty !!!\n");
				}
				else
				{
					while(p != NULL)
					{
						printf("%d\t",p->Data);
						p = p->Prev;
					}
				}
				break;
				
			case 4:
				printf("-------------------------:::: EXIT OPERATION ::::-------------------------");
				while(TOP != NULL)
				{
					p = TOP;
					TOP = TOP->Prev;
					TOP->Next = NULL;
					p->Prev = NULL;
					free(p);
				}			
				break;
			
			default:
				printf("\nYour Choice is Invalid !!! Try Again !!!\n");
		}
		p = NULL;
	}while(ch != 4);
	printf("\n\t\t\tTHANK YOU\n\t\t\tNICE TO MEET YOU");
	return 0;
}
