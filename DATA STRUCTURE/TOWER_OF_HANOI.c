//Tower of Hanoi.....
#include<stdio.h>
//Function Prtotype.......
void tower(int ,char,char,char);

//main()
int main()
{
	int n;
	printf("Enter a Number : ");
	scanf("%d",&n);
	tower(n,'A','B','C');//Function Calling........
	return 0;
}

//Function Definition.....(Recursion Function)
void tower(int n,char from,char aux,char to)
{
	if(n == 1)
	{
		printf("\nMove Top From %c to %c ",from,to);
		return;
	}
	tower(n-1,from,to,aux);
	printf("\nMove Top From %c to %c",from,to);
	tower(n-1,aux,from,to);
}
