#include<stdio.h>
void main()
{
int a[10][10],temp;
int r,c,sum=0;
printf("enter the number of rows and columns");
scanf("%d%d",&r,&c);
for(int i=0;i<r;i++)
{
for(int j=0;j<c;j++)
{
scanf("%d",&a[i][j]);
}
}
temp=a[0][0];
printf("\n the given matrix is\n");
for(int i=0;i<r;i++)
{
for(int j=0;j<c;j++)
{
printf("%d\t",a[i][j]);
if(i==j)
{
sum+=a[i][j];
}
if(a[i][j]>temp)
{
temp=a[i][j];
}
}
printf("\n");
}
printf("sum is%d \n max is%d",sum,temp);
}
