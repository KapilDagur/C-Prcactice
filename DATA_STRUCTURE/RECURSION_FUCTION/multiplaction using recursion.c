#include<stdio.h>
int mul(int num,int m)
{
	if(m == 0)
		return 0;
	return num + mul(num,m-1);
};

int main()
{
	int n1,n2;
	printf("ENTER A NUMBER : ");
	scanf("%d%d",&n1,&n2);
	printf("\nENTERED VALUE : %d and %d\n",n1,n2);
	int multi = mul(n1,n2);
	printf("The multiplication of %d and %d is %d",n1,n2,multi);
	return 0;
	
}
