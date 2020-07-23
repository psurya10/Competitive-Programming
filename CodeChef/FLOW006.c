#include<stdio.h>

int main()
{
  int t,i;
  scanf("%d",&t);
  for(i=0;i<t;i++)
  {
    int n,rem,sum=0;
    scanf("%d",&n);
    while(n>0)
    {
      rem=n%10;
      sum=sum+rem;
      n=n/10;
    }
    printf("%d\n",sum);
  }
}
