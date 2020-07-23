#include<stdio.h>

int main()
{
 int n,k,i;
 scanf("%d",&n);
 scanf("%d",&k);
 int t[n];
 int count=0;
 for(i=0;i<n;i++)
 {
   scanf("%d",&t[i]);
   if(t[i]%k==0)
   {
     count=count+1;
   }
 }
 printf("%d\n",count);
}
