#include <stdio.h>
int main()
{
    int a[4][5]; //2D Array Declear korlam
    for (int i = 0; i < 4; i++)
    {
        //printf("%d\n", i); //[array 1-3 porjonto print dey ki na check]
        
        for(int j=0;j<5;j++)
        {
           // printf("%d %d\n",i,j);
            //OUTPUT:
            // 0 0
            // 0 1
            // 0 2
            // 0 3
            // 0 4
            // 1 0
            // 1 1
            printf("a[%d] [%d] ",i,j);
        }
        printf("\n");
    }
    return 0;
}
