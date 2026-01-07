#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    
    int Tiger=0,Pathan=0;
    for(int i=0;i<n;i++)
    {
        int x,y;
        scanf("%d %d",&x,&y);
        if(x>y)
        {
            Tiger++;
        }
        else if (y>x)
        {
            Pathan++;
        }
    }
   

    if(Tiger>Pathan)
    {
        printf("Tiger");
    }
    else if (Pathan>Tiger)
    {
        printf("Pathan");
    }
    else
    {
        printf("Draw");
    }
    return 0;
}