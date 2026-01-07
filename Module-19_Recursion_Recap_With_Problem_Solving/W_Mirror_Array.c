#include<stdio.h>
int main()
{
    int n,m; //n=row,m=col
    scanf("%d %d",&n,&m);
    int a[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for (int i = 0; i < n; i++) //i row er kaj kore
    {
        for (int j = m-1; j >= 0; j--) //j col er kaj kore
        {
           printf("%d ", a[i][j]);
        }
        printf("\n");
    }
   

    return 0;
}