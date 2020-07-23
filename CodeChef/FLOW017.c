#include<stdio.h>

int main()
{
  int a,b,c,t;
  scanf("%d",&t);
  int i,p;
  for(i=0;i<t;i++)
  {
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c)
    {
      if(b>c)
        p=b;
      else
        p=c;
    }

    if(b>a && b>c)
    {
      if(a>c)
        p=a;
      else
        p=c;
    }

    if(c>b && c>a)
    {
      if(a>b)
        p=a;
      else
        p=b;
    }
   printf("%d\n",p);
  }
}
