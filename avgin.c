#include <stdio.h>

int main(void) {
	int i,b[2],sum=0;
	for(i=1;i<=2;i++)
	{
		scanf("%d",&b[i]);
	}
	for(i=1;i<=2;i++)
	{
		sum=sum+b[i];
	}
	avg=sum/2;
	printf("%d",avg);
	return 0;
}
