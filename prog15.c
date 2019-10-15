#include<stdio.h>
void main()
{
int i,a[100];
printf("Enter n value:");
for(i=1;i<10;i++)
{
scanf("%d\n",&a[i]);
}
for(i=1;i<=10;i++)
{
if(a[i]==23)
{
printf("%d is equal to 23\n",a[i]);
}
}
}
