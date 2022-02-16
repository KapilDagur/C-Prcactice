//Stack Operations
#include<stdio.h>
#define MAXSIZE 50

//Structure Define
struct Stack
{
	int stack[MAXSIZE];
	int top;
};
typedef struct Stack STACK;

//Function Prototype
void push(STACK *, int);
int pop(STACK *);
void traverse(STACK *);

//MAIN()
int main()
{
	STACK s;
	int ch,item;
	s.top = -1;
	do
	{
		printf("\nPress 1 For PUSH an Element : \n");
		printf("Press 2 For POP an Element : \n");
		printf("Press 3 For Traverse : \n");
		printf("Press 4 For EXIT : \n");
		printf("ENTER YOUR CHOICE : ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("\n------------:::: PUSH OPERATION ::::-----------------\n");
				printf("ENTER ELEMENT : ");
				scanf("%d",&item);
				push(&s,item);
				break;
			
			case 2:
				printf("\n------------:::: POP OPERATION ::::------------------\n");
				item = pop(&s);
				printf("POP ELEMENT : %d",item);
				break;
			
			case 3:
				printf("\n------------:::: TRAVERSE OPERATION ::::-------------\n");
				traverse(&s);
				break;
				
			case 4:
				printf("\n------------------:::: EXIT ::::---------------------\n");
				break;
				
			default:
				printf("\nYOUR CHOICE IS INVALID !!! TRY AGAIN ??\n");
		}
	}while(ch != 4);
	return 0;
}

//FUNCTION DEFINITION....
//PUSH OPERATION FUNCTION DEFINITION.....
void push(STACK *s,int item)
{
	if(s->top == MAXSIZE -1)
	{
		printf("\nSTACK IS OVERFLOW !!!\n");
	}
	else
	{
		s->top = s->top+1;
		s->stack[s->top] = item;
	}
}

//POP OPERATION FUNCTION DEFINITION......
int pop(STACK *s)
{
	int data;
	if(s->top == -1)
	{
		printf("\nSTACK IS UNDERFLOW !!!\n");
	}
	else
	{
		data = s->stack[s->top];
		s->top = s->top-1;
		return data;
	}
}

//TRAVERSE OPERATION FUNCTION DEFINITION......
void traverse(STACK *s)
{
	int i;
	i = s->top;
	if(i == -1)
	{
		printf("\nSTACK IS UNDERFLOW(EMPTY)!!! TRAVERSING NOT POSSIBLE\n");
	}
	else
	{
		while (i != -1)
		{
			printf("%d\t",s->stack[s->top]);
			i = i-1;
		}
	}
}
