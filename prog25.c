#include<stdio.h>
void main()
{
    int a[10][10],i,j,m,n,max=a[0][0];
    printf("enter m,n value:");
    scanf("%d\t%d",&m,&n);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
        scanf("%d",&a[i][j]);
        }
    }
    
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(max<a[i][j])
            {
             max=a[i][j];   
            }
        
        }
    }

    printf("%d",max);


}


