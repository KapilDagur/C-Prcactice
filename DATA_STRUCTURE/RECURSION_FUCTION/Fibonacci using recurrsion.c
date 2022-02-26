#include<stdio.h>
//Fibonacci Using recursion
int fib(int num)
{
	int f0=0,f1=1,fn;
	if(num == 1)
		return 0;
	if(num == 2)
		return 1;
	return fib(num-1) + fib(num-2);
}
int main()
{
	int num;
	printf("Enter a number to find fibonacci term using recursinon : ");
	scanf("%d",&num);
	if(num > 0)
	{
	
		int fibo = fib(num);
		printf("\nThe %d term of Fib series is %d ",num,fibo);
	}
	else
	{
		printf("\nThe %d term of Fib series is not possible",num);
	}
	return 0;
}
