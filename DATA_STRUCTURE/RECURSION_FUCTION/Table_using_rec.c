#include<stdio.h>

int table(int,int);
//main()
int main()
{
	int num;
	printf("Enter a Number : ");
	scanf("%d",&num);
	table(num,1);
	return 0;
}

//Function Definition
int table(int n , int i)
{
	if(i>10)
		return 0;
	printf("%d * %d = %d\n",n,i,n*i);
	return table(n,i+1);
}
