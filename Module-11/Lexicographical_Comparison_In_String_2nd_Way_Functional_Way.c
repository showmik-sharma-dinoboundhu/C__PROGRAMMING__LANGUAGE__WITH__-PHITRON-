#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100];
    scanf("%s %s",&a,&b);
    int v=strcmp(a,b);
   /// printf("%d",v);

   if(v<0)
   {
       printf("a is small\n");
   }
   else if(v>0)
   {
       printf("b is small\n");
   }
   else
   {
       printf("a and b are same\n");
   }
    return 0;
}
