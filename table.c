#include<stdio.h>
void main()
{
int n,pro;
scanf("%d",&n);
for(int i=1;i<=20;i++)
{
pro=i*n;
printf("%d*%d=%d\n",i,n,pro);
}
}
