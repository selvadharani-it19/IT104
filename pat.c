#include<stdio.h>
void main()
{
int n;
printf("enterthe number of rows");
scanf("%d",&n);
for(int i=1;i<=n;i++)
{
for(int j=1;j<=i;j++)
{
printf("*\t");
}
printf("\n");
}
}

