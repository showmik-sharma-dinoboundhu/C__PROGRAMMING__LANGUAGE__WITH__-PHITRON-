#include<stdio.h>
int main()
{
   int i,n;
   scanf("%d",&n);  //input nichi 5 ta
   int ar[n+1];     //as index 1 e 100 input dibo tai box hobe 6 ta tai array e box er size baralam
   for(i=0;i<n;i++)
   {
       scanf("%d",&ar[i]);
   }
   int pos,val;                 ////pos=index value=man like 100
   scanf("%d %d",&pos,&val);
   for(i=n;i>=pos+1;i--)        //index+1 ta lagbe tai pos+1
   {
       ar[i]=ar[i-1];       //ar[5]=ar[4] ek ek kore ei bhabe komte thakbe
   }
   ar[pos]=val;
   for(i=0;i<=n;i++)
   {
       printf("%d ",ar[i]);
   }

    return 0;
}




