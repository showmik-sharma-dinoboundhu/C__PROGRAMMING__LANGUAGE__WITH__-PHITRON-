#include<stdio.h>
int main()
{
   /// int ar[7]={10,20,30,40,50,60,70};
   ///char ar[7]={'S','h','o','w','m','i','k'};
   char ar[8]="Showmik\0";
   // for(int i=0;i<7;i++)
    //{
    //printf("%c ",ar[i]);
    //}
    int sz=sizeof(ar)/sizeof(char);
    printf("%d ",sz);
    printf("%s ",ar);
    return 0;
}
