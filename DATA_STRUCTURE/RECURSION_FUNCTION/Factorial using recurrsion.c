#include<stdio.h>
long fact(int num)
{
	if(num == 1 || num == 0)
		return 1;
	return num*fact(num-1);
};

int main()
{
	int num;
	printf("Enter a number to find factorial using recursion\n");
	scanf("%d",&num);
	printf("You ENTERED : %d\n",num);
	if(num >= 0)
	{
			long facto;
			facto = fact(num);
			printf("Factorial of %d is %d",num,facto);
	}
	else
		printf("Factorial of %d is not possible",num);
	return 0;
}

