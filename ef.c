#include<stdio.h>
void main()
{
int a[10],n,k,count=0;
scanf("%d",&n);
for(int i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("\n enter the element that you want to find");
scanf("%d",&k);
for(int i=0;i<n;i++)
{
if(a[i]==k)
{
count=1;
}
}
if(count==1)
{
printf("\n element found");
}
else
{
printf("\n element not found");
}
}

