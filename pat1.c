#include<stdio.h>
void main()
{
int n;
scanf("%d",&n);
for(int a=n;a>=1;a--)
{
for(int b=n;b>=a;b--)
{
printf(" ");
}
for(int c=1;c<=a;c++)
{
printf("%d",c);
}
for(int d=a-1;d>=1;d--)
{
printf("%d",d);
}
printf("\n");
}
}
