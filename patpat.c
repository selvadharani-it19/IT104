#include<stdio.h>
void main()
{
int n;
scanf("%d",&n);
for(int i=1;i<=n;i++)
{
for(int j=n-1;j>=i;j--)
{
printf(" ");
}
for(int k=1;k<=i;k++)
{
printf("%d",k);
}
for(int l=i-1;l>=1;l--)
{
printf("%d",l);
}

printf("\n");
}
for(int a=n-1;a>=1;a--)
{
for(int b=n-1;b>=a;b--)
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
