#include<stdio.h>
#include<string.h>
int main()
{
char a[100];
int i,count=0;flag=o;
scanf("%d",&a);
for(i=0;i<=100;i++)
{
if((a[i]>='a'&&a[i]<='z')  (a[i]>='A'&&a[i]<='Z'))
{
count++;
}
if((a[i]>='0'&&a[i]<='9'))
{
flag++;
}
if(count>0&&flag>0)
printf("both alphabets and numbers");
else 
printf(" not alphabet and numbers");
}
return 0;
}
