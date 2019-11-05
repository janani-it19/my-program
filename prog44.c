#include<stdio.h>
void main()
{
int i,j,temp,a[10];
printf("Enter 10 integer numbers: \n");
for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
}
for (i=0;i<10;i++)
{
for(j=i+1;j<10;j++)
{
if(a[i]>a[j])
{
temp=a[j];
a[j]=a[i];
a[i]=temp;
}
}
}
printf("\nThe 10 numbers sorted in ascending order are: \n");
for(i=0;i<10;i++)
{
printf("%d\t",a[i]);
}
}
