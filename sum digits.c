#include <stdio.h>
int main() 
{
	int a,b,c,d,e,f;
	printf("enter the digit\n");
	scanf("%d",&a);
	b=a/10;
	c=a%10;
	d=b/10;
	e=b%10;
	f=c+d+e;
	printf("%d",f);
	return 0;
}
	
