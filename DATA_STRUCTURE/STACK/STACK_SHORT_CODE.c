#include<stdio.h>
#define MAXSIZE 50
int STACK[MAXSIZE];
int TOP = -1;

int main()
{
	int i,ch,item;
	do
	{
		printf("\nPress 1 For PUSH\n");
		printf("Press 2 For POP\n");
		printf("Press 3 For DISPLAY\n");
		printf("Press 2 For EXIT\n");
		printf("ENTER YOUR CHOICE : ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("\n------:::: PUSH ::::------\n");
				TOP++;
				printf("ENTER DATA : ");
				scanf("%d",&item);
				STACK[TOP] = item;
				break;
				
			case 2:
				printf("\n-------:::: POP ::::------\n");
				printf("DELETED ITEM : %d",STACK[TOP--]);
				break;
				
			case 3:
				for(i=TOP;i>-1;i--)
				{
					printf("%d\t",STACK[i]);
				}
				break;
				
			case 4:
				break;
			
			default:
				printf("\nYour Choice is Invalid ! Try Again !!!\n");
		}
	}while(ch != 4);
}
