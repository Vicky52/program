#include<stdio.h.
int main()
{
int number,remainder,count=0;
printf("enter any number\n");
scanf("%d",&number);
while(number>0)
{
number=number/10;
count=count+1;
}
printf("number of digits in a given number=%d",count);
}
