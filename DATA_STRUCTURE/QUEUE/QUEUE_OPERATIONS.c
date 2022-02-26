//QUEUE OPERATIONS
#include<stdio.h>
#define MAXSIZE 50

//STRUCTURE DEFINE
struct Queue
{
	int queue[MAXSIZE];
	int front;
	int rear;
};
typedef struct Queue QUEUE;

//FUNCTION PROTOTYPE
void insert(QUEUE *,int);
int Delete(QUEUE *);
void traverse(QUEUE *);

//MAIN()
int main()
{
	QUEUE q;
	int ch,item;
	q.front = -1;
	q.rear = -1;
	do
	{
		printf("\nPress 1 for INSERTION IN QUEUE\n");
		printf("\nPress 2 for DELETION IN QUEUE\n");
		printf("\nPress 3 for TRAVERSE QUEUE\n");
		printf("\nPress 4 for EXIT\n");
		printf("\nENTER YOUR CHOICE : \n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("\n---------------:::: INSERTION IN QUEUE ::::----------------\n");
				printf("ENTER ELEMENT : ");
				scanf("%d",&item);
				insert(&q,item);
				break;
			
			case 2:
				printf("\n---------------::::  DELETION IN QUEUE ::::----------------\n");
				item = Delete(&q);
				printf("\nDELETED ELEMENT : %d",item);
				break;
				
			case 3:
				printf("\n---------------:::: TRAVERSING THE QUEUE ::::--------------\n");
				traverse(&q);
				break;
				
			case 4:
				printf("\n---------------:::: EXIT FROM QUEUE PROGRAM ::::-----------\n");
				break;
				
			default:
				printf("\nYOUR CHOICE IS INVALID !!! TRY AGAIN ??\n");
		}
	}while(ch != 4);
	return 0;
}

//FUNCTION DEFINITION.....
//INSERTION OPERATION FUNCTION.....
void insert(QUEUE *Q,int item)
{
	if(Q->rear == MAXSIZE-1)
	{
		printf("\nQUEUE IS FULL ! INSERTION NOT POSSIBLE !!!\n");
		return;
	}
	if(Q->front == -1)
	{
		Q->front = 0;
		Q->rear = 0;
		Q->queue[Q->rear] = item;
	}
	else
	{
		Q->rear = Q->rear + 1;
		Q->queue[Q->rear] = item;
	}
}

//DELETION OPERATION FUNCTION......
int Delete(QUEUE *Q)
{
	int item;
	if(Q->front == -1)
	{
		printf("\nQUEUE IS EMPTY ! DELETION NOT POSSIBLE !!!\n");
		return ;
	}
	item = Q->queue[Q->front];
	if(Q->front == Q->rear)
	{
		Q->front = -1;
		Q->rear = -1;
		return item;
	}
	else
	{
		Q->front =Q->front + 1;
		return item;
	}
}

//TRAVERSE OPERATION FUNCTION......
void traverse(QUEUE *Q)
{
	int i;
	i = Q->front;
	if(i == -1)
	{
		printf("\nQUEUE IS EMPTY ! TRAVERSING NOT POSSIBLE !!!\n");
	}
	else
	{
		while (i != Q->rear+1)
		{
			printf("%d\t",Q->queue[i]);
			i++;
		}
	}
}

