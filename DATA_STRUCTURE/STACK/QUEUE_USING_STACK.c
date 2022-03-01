//Queue Using Stack
#include<stdio.h>
#define MAXSIZE 50

//Structure.......
struct Stack
{
	int Top;
	int stack[MAXSIZE];
};
typedef struct Stack STACK;

//Function Prototype.....
void insert(STACK *,int);
int Delete(STACK *,STACK *);
void traverse(STACK *,STACK *);

//MAIN()
int main()
{
	STACK s,ts;
	int ch,data;
	s.Top = -1;
	ts.Top = -1;
	do
	{
		printf("Press 1 For Insertion :\n");
		printf("Press 2 For Deletion :\n");
		printf("Press 3 For Traverse :\n");
		printf("Press 4 For Exit :\n");
		printf("Enter Your Choice : ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("<<<<<<<<<<<<<<<<<<<<:::: INSERTION OPERATION ::::>>>>>>>>>>>>>>>>>>>>\n\n\n");
				printf("ENTER DATA : ");
				scanf("%d",&data);
				insert(&s,data);
				printf("\n\n\n\n");
				break;
			
			case 2:
				printf("<<<<<<<<<<<<<<<<<<<<:::: DELETION OPERATION ::::>>>>>>>>>>>>>>>>>>>>\n\n\n");
				data = Delete(&s,&ts);
				if(data == -1)
				{
					printf("Queue is Empty !!! ");
				}
				else
				{
					printf("DELETED DATA : %d",data);
				}
				printf("\n\n\n\n");
				break;
				
			case 3:
				printf("<<<<<<<<<<<<<<<<<<<<:::: TRAVERSE OPERATION ::::>>>>>>>>>>>>>>>>>>>>\n\n\n");
				traverse(&s,&ts);
				printf("\n\n\n\n");
				break;
				
			case 4:
				printf("<<<<<<<<<<<<<<<<<<<<:::: EXITING ::::>>>>>>>>>>>>>>>>>>>>\n\n\n");
				printf("\n\nExiting Successful......");
				printf("\n\n\n\n");
				break;
				
			default:
				printf("\nYour Choice Is Invalid !!! Try Again ?\n\n\n");
		}
	}while(ch != 4);
	return 0;
}

//Function Definations.......
//Insertion Function Definition.....
void insert(STACK *S,int data)
{
	if(S->Top == MAXSIZE - 1)
	{
		printf("\nOVERFLOW CONDIITION !!!\n\n");
		return ;
	}
	else
	{
		S->Top = S->Top + 1;
		S->stack[S->Top] = data;
	}
}

//Deletion Function Definition.....
int Delete(STACK *S,STACK *TS)
{
	int i=0,data;
	if(S->Top == -1)
	{
		printf("\nUnderFlow Condition !!!\n\n");
		return -1;
	}
	else
	{
		while(S->Top > -1)
		{
			TS->Top += 1;
			TS->stack[TS->Top] = S->stack[S->Top];
			S->Top -= 1;
		}
		data = TS->stack[TS->Top];
		TS->Top -= 1;
		while(TS->Top > -1)
		{
			S->Top += 1;
			S->stack[S->Top] = TS->stack[TS->Top];
			TS->Top -= 1;
		}
	return data;
	}
}
void traverse(STACK *S,STACK *TS)
{
	if(S->Top == -1)
	{
		printf("\nUnderFlow Condition !!!\n\n");
	}
	else
	{
		while(S->Top > -1)
		{
			TS->Top += 1;
			TS->stack[TS->Top] = S->stack[S->Top];
			S->Top -= 1;
		}
		
		while(TS->Top > -1)
		{
			S->Top += 1;
			S->stack[S->Top] = TS->stack[TS->Top];
			printf("%d\t",TS->stack[TS->Top]);
			TS->Top -= 1;
		}
	}
}
