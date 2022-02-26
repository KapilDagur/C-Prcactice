//CIRCULAR QUEUE
#include<stdio.h>
#define MAXSIZE 5

//Structure
struct Circuler_Queue
{
	int circuler_queue[MAXSIZE];
	int front;
	int rear;
};
typedef struct Circuler_Queue CIRCULER_QUEUE;

//Function Prototype
void insert(CIRCULER_QUEUE *CQ,int);
int Delete(CIRCULER_QUEUE *CQ);
void traverse(CIRCULER_QUEUE *CQ);

//main()
int main()
{
	CIRCULER_QUEUE cq;
	int ch,item;
	cq.front = -1;
	cq.rear = -1;
	do
	{
		printf("\nPress 1 for Insertion in Circuler Queue\n");
		printf("Press 2 for Deletion in Circuler Queue\n");
		printf("Press 1 for Traversing in Circuler Queue\n");
		printf("Press 4 for EXIT : \n");
		printf("Enter Your Choice : \n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("\n--------------:::: INSERTION OPERATION ::::----------------\n");
				printf("ENTER DATA : ");
				scanf("%d",&item);
				insert(&cq,item);
				break;
				
			case 2:
				printf("\n--------------:::: DELETION OPERATION ::::-----------------\n");
				item = Delete(&cq);
				printf("DELETED ITEM : %d",item);
				break;
				
			case 3:
				printf("\n--------------:::: TRAVERSING OPERATION ::::---------------\n");
				traverse(&cq);
				break;
				
			case 4:
				break;
				
			default:
				printf("\nYour Choice is Invalid ! Try Again !!!\n");
		}
	}while(ch != 4);
	return 0;
}

//Function Definition.....
//Insertion In Circuler Queue Function.......
void insert(CIRCULER_QUEUE *CQ,int item)
{
	if(CQ->front == (CQ->rear + 1) % MAXSIZE)
	{
		printf("\nCIRCULER QUEUE IS FULL ! Insertion Not Possible !!!\n");
	}
	else if(CQ->front == -1 && CQ->rear == -1)
	{
		CQ->front = 0;
		CQ->rear = 0;
		CQ->circuler_queue[CQ->rear] = item;
	}
	else 
	{
		CQ->rear = (CQ->rear + 1)%MAXSIZE;
		CQ->circuler_queue[CQ->rear] = item;
	}
}

//Deletion In Circuler Queue Function........
int Delete(CIRCULER_QUEUE *CQ)
{
	int item = -1;
	if(CQ->front == -1 && CQ->rear == -1)
	{
		printf("\nCIRCULER QUEUE Is Empty ! Deletion Not Possible !!!\n");
	}
	else if(CQ->front == CQ->rear)
	{
		item = CQ->circuler_queue[CQ->front];
		CQ->front = -1;
		CQ->rear = -1;
		return item;
	}
	else
	{
		item = CQ->circuler_queue[CQ->front];
		CQ->front = (CQ->front + 1) % MAXSIZE;
		return item;
	}
}

//Traversing In Circuler Queue Function.......
void traverse(CIRCULER_QUEUE *CQ)
{
	int i = CQ->front;
	if(CQ->front == -1 && CQ->rear == -1)
	{
		printf("CIRCULER QUEUE IS EMPTY ! CAN\'t SEE ANY ELEMENT");
	}
	else
	{
		while (i != CQ->rear)
		{
			printf("%d\t",CQ->circuler_queue[i]);
			i = (i + 1) % MAXSIZE;
		}
		printf("%d\t",CQ->circuler_queue[CQ->rear]);
	}
}
