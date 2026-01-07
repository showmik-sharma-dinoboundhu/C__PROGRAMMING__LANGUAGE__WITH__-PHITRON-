#include <stdio.h>
int main()
{
    int  x,p;
    scanf("%d %d",&x,&p);
    
    //Formula:
    //p/(1-(x/100))

    float t=(1-(x/100.0));
    float ans=p/t;
    printf("%0.2f",ans);
    return 0;
}