#include<stdio.h>
void main()
{
int x,y,z;
printf("enter x value:");
scanf("%d",&x);
printf("enter y value:");
scanf("%d",&y);
printf("enter z value:");
scanf("%d",&z);
if(x>y&&x>z)
{
printf("%d is greater",x);
}
else if(y>z)
{
printf("%d is greater",y);
}
else
{
printf("%d is greater",z);
}
}



