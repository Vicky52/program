#include<stdio.h>
int main()
{
int n,i,e,s;
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
printf("%d",a[i]);
}
e=a[0];
for(i=0;i<n;i++)
{
if(e<a[i])
{
e=a[i];
}
}
printf("\n largest number%d",b);
}
s=a[0];
for(i=0;i<n;i++)
{
if(s>a[i])
{
s=a[i];
}
}
printf("the largest valuve is%d",s);
return 0;
}
