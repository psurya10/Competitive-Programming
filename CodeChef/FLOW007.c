#include<stdio.h>

int main()
{
  int t,i,n;
  scanf("%d",&t);

  for(i=0;i<t;i++)
  {
    int rev=0;
    int rem=0;
    scanf("%d",&n);
    do
    {
     rem=n%10;
     rev=10*rev+rem;
     n=n/10;
    } while(n>0);
    printf("%d\n",rev);
  }
}
