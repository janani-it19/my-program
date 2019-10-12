
#include<stdio.h> 
void main() 
{ 
char c;
printf("enter any character:"); 
scanf("%c",&c); 
if(c>='a'&&c<='z') 
{ 
printf("%c is a alphabet",c);
}
else 
{ 
printf("%d is a number",c);
}
}
