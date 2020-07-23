#include<stdio.h>

int main()
{
  int i,t;
  scanf("%d\n",&t);
  for(i=0;i<t;i++)
  {
    int n,rem=0;
    int rev=0;
    int temp;
    scanf("%d\n",&n);
    temp=n;
    while(n>0)
    {
      rem=n%10;
      rev=rev*10+rem;
      n=n/10;
    }
    if(temp==rev)
      printf("wins\n");
    else
      printf("losses\n");
  }
}
