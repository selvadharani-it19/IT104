#include<stdio.h>
void main()
{
int a[10],n;
printf("enter the no of values");
scanf("%d",&n);
printf("\n enter the values of the array");
for(int i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("\n the reverse of the array is:");
for(int j=n-1;j>=0;j--)
{
printf("%d",a[j]);
}
}
