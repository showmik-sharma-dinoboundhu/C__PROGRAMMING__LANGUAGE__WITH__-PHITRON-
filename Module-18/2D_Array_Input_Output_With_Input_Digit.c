#include <stdio.h>
int main()
{
    //4 row[khara khara] 5 column[soywano soywano]
    
    int a[4][5];
    for(int i=0;i<4;i++)
    {
        for(int k=0;k<5;k++)
        {
            scanf("%d ",&a[i][k]);
        }
    }
    for (int i = 0; i < 4; i++)
    {
        for (int k = 0; k < 5; k++)
        {
            printf("%d ",a[i][k]);
        }
        printf("\n");
    }
    return 0;
}
