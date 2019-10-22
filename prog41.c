#include<stdio.h>
void main()
{
int a[100],i,max=a[0],n=10;
for(i=1;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=1;i<n;i++)
{
if(max<a[i])
{
max=a[i];
}
}
printf("greast=%d",max);
}

