#include<stdio.h>
int main()
{
int i,n,sum=1;
 scanf("%d",&n);
 for(i=2;i<n;i++)
 {
 sum=sum*i;
 }
 if(sum>n)
 {
 printf(%d",sum);
 }
 return 0;
 }
