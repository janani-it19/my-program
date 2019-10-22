#include<stdio.h>
void main()
{
int a[10],i,n=5,x;
printf("Enter a number:");
scanf("%d",&x);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if(a[i]==x)
{
printf("%d is present in array",x);
}
}
}

