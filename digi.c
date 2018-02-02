#include<stdio.h>
int main()
{
int n,a,count=0;
printf("enter the number\n");
scanf("%d",&a);
while(n>0)
{
count++;
a=n%10;
printf("%d",&a);
}
return 0;
}
