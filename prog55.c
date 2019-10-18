#include<stdio.h>
void main()
{
int mark;
printf("Enter the mark:");
scanf("%d",&mark);
if(mark>=50&&mark<60)
{
printf("Your grade is D");
}
else if(mark>=60&&mark<70)
{
printf("Your grade is C");
}
else if(mark>=70&&mark<80)
{
printf("Your ngeade is B");
}
else if(mark>=80&&mark<100)
{
printf("Your grade is A");
}
else
{
printf("You failed attempt once again");
}
}
