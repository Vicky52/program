include <stdio.h>
int main()
{
	int a,b,c;
	printf("enter the numbers");
	scanf("%d%d",&a,&b);
	printf("the numbers are %d and %d",a,b);
	c=a;
	a=b;
	b=c;
	printf("the swap numbers are %d and %d",a,b);

return 0;
}
