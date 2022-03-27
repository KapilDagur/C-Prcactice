//Linked List
#include<stdio.h>
#include<stdlib.h>

//Structure.....
struct node
{
	int data;
	struct node *next;
};
typedef struct node NODE;

//MAIN()
int main()
{
	NODE *p,*q,*r,*start;
	int i,n,ch,pos;
	start = NULL;
	//Linked List Creation.......
	printf("Enter Number of Nodes : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		p = (NODE*)malloc(sizeof(NODE));
		printf("Enter Data : ");
		scanf("%d",&p->data);
		p->next = NULL;
		if(start == NULL)
		{			
			start = p;
		}
		else
		{
			q->next = p;
		}
		q = p;
	}
	//OPERATION WITH LINKED LIST...........
	do
	{
		printf("~~~~~~~~~~~~~~~~~~~~~:: INSERTION IN LINKED LIST ::~~~~~~~~~~~~~~~~~\n");
		printf("Press 1 For Insertion at the starting of Linked List :\n");
		printf("Press 2 For Insertion at the Last of Linked List : \n");
		printf("Press 3 For Insertion at the Particular Location of Linked List : \n");
		printf("Press 4 For Insertion at the Before Particular Location of Linked List :\n");
		printf("Press 5 For Insertion at the After Particular Location of Linked List :\n\n\n");
		printf("~~~~~~~~~~~~~~~~~~~~~:: DELETION IN LINKED LIST ::~~~~~~~~~~~~~~~~~~\n");
		printf("Press 6 For Deletion at the starting of Linked List :\n");
		printf("Press 7 For Deletion at the Last of Linked List : \n");
		printf("Press 8 For Deletion at the Particular Location of Linked List :\n");
		printf("Press 9 For Deletion at the Before Particular Location of Linked List :\n");
		printf("Press 10 For Deletion at the After Particular Location of Linked List :\n\n\n");
		printf("~~~~~~~~~~~~~~~~~~~~:: TRAVERSING IN LINKED LIST ::~~~~~~~~~~~~~~~~~\n");
		printf("Press 11 For Display Elements of Linked List :\n");
		printf("Press 12 For EXIT :\n");
		printf("ENTER YOUR CHOICE : ");
		scanf("%d",&ch);
		switch(ch)
		{
			//INSERTION OPERATIONS...........
			//Insertion At Starting.......
			case 1:
				p = (NODE*)malloc(sizeof(NODE));
				//If memory Allocation Failed
				if(p == NULL)
				{
					printf("Memory Allocation Unsuccessful ! Try Again !!! ");
				}
				//If memory Allocated Succcessfully !!!
				else
				{
					p->next = NULL;
					printf("Enter Data : ");
					scanf("%d",&p->data);
					if(start == NULL)
				    {
				    	start = p;
				   	}
					else
					{
						q = start;
						start = p;
						p->next = q;
					}
				}
				printf("\n\n\n");
				break;
			//Insertion At Last........
			case 2:
				p = (NODE*)malloc(sizeof(NODE));
				q = start;
				//If memory Allocation Failed
				if(p == NULL)
				{
					printf("Memory Allocation Unsuccessful ! Try Again !!! ");
				}
				//If memory Allocated Succcessfully !!!
				else
				{
					p->next = NULL;
				    printf("Enter Data : ");
					scanf("%d",&p->data);
				    if(start == NULL)
				    {
					    start = p;
				    }
				    else
				    {
					    while(q->next!=NULL)
					    {
					    	q = q->next;
						}
						q->next = p;
				    }
				}
				printf("\n\n\n");
				break;
			
			//Insertion At Particular Location.....
			case 3:
				q = start;
				r = start;
				p = (NODE*)malloc(sizeof(NODE));
				p->next = NULL;
				if(p == NULL)
				{
					printf("Memeory Allocation Unsuccessful !!!");
				}
				else
				{
					if(start == NULL)
					{
						printf("Linked List is Empty So you can\'t Do Insertion At Particluar location");
						free(p);
					}
					else
					{
						printf("Enter Position : ");
						scanf("%d",&pos);
						for(i=pos;i>1;i--)
						{
							r = q;
							q = q->next;
						}
						printf("Enter Data : ");
						scanf("%d",&p->data);
						r->next = p;
						p->next = q;
					}
				}
				printf("\n\n\n");
				break;
			
			//Insertion Before At Particular Location.....
			case 4:
				q = start;
				r = start;
				p = (NODE*)malloc(sizeof(NODE));
				if(p == NULL)
				{
					printf("Memory Allocation unsuccessful ! Try again !!! ");
				}
				else
				{
					if(start == NULL)
					{
						printf("Linked List is Empty So you can\'t Do Insertion At Particluar location");
						free(p);
					}
					else
					{
						printf("Enter Position : ");
						scanf("%d",&pos);
						for(i=pos;i>2;i--)
						{
							r = q;
							q = q->next;
						}
						printf("Enter Data : ");
						scanf("%d",&p->data);
						r->next = p;
						p->next = q;
					}
				}
				printf("\n\n\n");
				break;
				
			//Insertion After At Particular Location.....
			case 5:
				q = start;
				r = start;
				p = (NODE*)malloc(sizeof(NODE));
				if(p == NULL)
				{
					printf("Memory Allocation unsuccessful ! Try again !!! ");
				}	
				else
				{
					if(start == NULL)
					{
						printf("Linked List is Empty So you can\'t Do Insertion At Particluar location");
					}
					else
					{
						printf("Enter Position : ");
						scanf("%d",&pos);
						for(i=pos;i>0;i--)
						{
							r = q;
							q = q->next;
						}
						printf("Enter Data : ");
						scanf("%d",&p->data);
						r->next = p;
						p->next = q;
					}
				}
				printf("\n\n\n");
				break;
			//Deletion Operation.......
			//Delation At Starting.....
			case 6:
				if(start == NULL)
				{
					printf("Deletion Not Possible !!!");
				}
				else
				{
					p = start;
					q = start;
					if(p->next == NULL)
					{
						start = NULL;
						printf("DELETED ITEM : %d",p->data);
						free(p);
					}
					else
					{
					p = p->next;
					start = p;
					printf("DELETED DATA : %d",q->data);
					free(q);
					}
				}
				printf("\n\n\n");
				break;
				
			//Deletion At Last.....
			case 7:
				if(start == NULL)
				{
					printf("Deletion Not Possible !!! ");
				}
				else
				{
					p = start;
					q = start;
					while(p->next != NULL)
					{
						q = p;
						p = p->next;
					}
					q->next = NULL;
					printf("Deleted Element : %d",p->data);
				    if(p == q)
					{
						start = NULL;
					}
					free(p);
				}
				printf("\n\n\n");
				break;

			//Deletion At Particular Location.....
			case 8:
				p = start;
				q = start;
				r = start;
				if(start == NULL)
				{
					printf("Linked List is Empty ! Deletion Not Possible !!! ");
				}
				else
				{
					printf("Enter Position : ");
					scanf("%d",&pos);
					if(pos == 1)
					{
						q = p;
						p = p->next;
						start = p;
						printf("Deleted Element : %d",q->data);
						free(q);
					}
					else
					{
						for(i=pos;i>1;i--)
						{
							q = p;
							p = p->next;
						}
						r = q;
						q = p ;
						p = p->next;
						r->next = p;
						printf("Deleted Element : %d",q->data);
						free(q);
					}
				}
				printf("\n\n\n");
				break;
				
			//Deletion Before At Particular Location.....
			case 9:
				p = start;
				q = start;
				r = start;
				if(start == NULL)
				{
					printf("Linked List is Empty ! Deletion Not Possible !!! ");
				}
				else
				{
					printf("Enter Position : ");
					scanf("%d",&pos);
					if(pos == 1)
					{
						printf("Deletion Not Possible At Index Zero !");
					}
					else if(pos == 2)
					{
						q = p;
						p = p->next;
						start = p;
						printf("Deleted Element : %d",q->data);
						free(q);
					}
					else
					{
						for(i=pos;i>2;i--)
						{
							q = p;
							p = p->next;
						}
						r = q;
						q = p ;
						p = p->next;
						r->next = p;
						printf("Deleted Element : %d",q->data);
						free(q);
					}
				}
				printf("\n\n\n");
				break;
				
			//Deletion After At PArticular Location.....
			case 10:
				p = start;
				q = start;
				r = start;
				if(start == NULL)
				{
					printf("Linked List is Empty ! Deletion Not Possible !!! ");
				}
				else
				{
					printf("Enter Position : ");
					scanf("%d",&pos);
					if(pos == 1)
					{
						q = p;
						p = p->next;
						r = q;
						q = p;
						p = p->next;
						start = p;
						printf("Deleted Element : %d",q->data);
						free(q);
					}
					else
					{
						for(i=pos;i>0;i--)
						{
							q = p;
							p = p->next;
						}
						r = q;
						q = p ;
						p = p->next;
						r->next = p;
						printf("Deleted Element : %d",q->data);
						free(q);
					}		
				}
				printf("\n\n\n");
				break;
			
			//Display All Elements.....
			case 11:
				if(start == NULL)
				{
					printf("THEIR HAVE NO ELEMENT :");
				}
				else
				printf("ELEMENTS ARE AS Follow =>\t");
				{
					p = start;
					while(p!=NULL)
					{
					    printf("%d,",p->data);
					    p = p->next;
					}
				}
				printf("\n\n\n");
				break;
				
			//EXIT From Program.......
			case 12:
				while(start != NULL)
				{
					q = start;
					start = start->next;
					free(q);
				}
				if(start == NULL)
				{
					printf("\nYes Every Nodes Are Free Now !!!\n");
				}
				break;
			
			//Invalid Input Case.......
			default:
				printf("\nYour Choice Is Invalid ! Try Again !!! \n");
		}
		//REFRESH ALL POINTER......
		p = NULL;
		q = NULL;
		r = NULL;
	}while(ch != 12);
	
	printf("\t\t\tTHANK YOU !!!\n\t\t\tNICE TO MEET YOU ");
	return 0;
}
