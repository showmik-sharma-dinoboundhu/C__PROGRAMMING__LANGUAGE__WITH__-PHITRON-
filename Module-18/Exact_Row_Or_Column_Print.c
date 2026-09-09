#include <stdio.h>
int main()
{
    int row, col;
    scanf("%d %d", &row, &col);
    int a[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int k = 0; k < col; k++)
        {
            scanf("%d ", &a[i][k]);
        }
    }


    int e; //exact row
    scanf("%d",&e);
    for(int i=0;i<col;i++)
    {
        printf("%d ",a[e][i]);
    }
    
    //     // input:
    //     // 4 3
    //     // 1 2 3
    //     // 4 5 6
    //     // 7 8 9
    //     // 10 11 12
    //     // 3


    int x; // exact col
    scanf("%d", &x);
    for (int i = 0; i < row; i++)
    {
        printf("%d ",a[i][x]);
    }
    return 0;
}
