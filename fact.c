#include<stdio.h>
void main()
{
int m;
printf("enter the n :");
scanf("%d",&m);
for(int i=0;i<=m;i++)
{
if(m%i==0)
{
printf("%d",i);
}
}
}


