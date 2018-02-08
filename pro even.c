#include<stdio.h>
int main()
{
	int i,a,b;
	printf("enter the numbers\n");
	scanf("%d%d",&a,&b);
	i=a*b;
	if(i%2==0)
	{
		printf("even");
	}
	else
	{
		printf("odd");
	}
	return 0;
}
