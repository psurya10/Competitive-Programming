#include<stdio.h>
#include<math.h>

int main()
{
  int n,t;
  scanf("%d",&t);
  int i,a;
  for(i=0;i<t;i++)
  {
    scanf("%d",&n);
    a=sqrt(n);
    printf("%d\n",a);
  }
}
