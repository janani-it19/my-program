#include <stdio.h>
int main() {
    int a[10][10],b[10][10],i,j,m,n,c[10][10];
    scanf("%d%d",&m,&n);
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
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
         c[i][j]=a[i][j]+b[i][j];
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
        printf("%d",c[i][j]);
        }
    }
    
    return 0;
}
