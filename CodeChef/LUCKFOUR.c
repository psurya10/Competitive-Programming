#include<stdio.h>

int main()
{
  int t,i,n,j;
  scanf("%d",&t);
  for(i=1;i<=t;i++)
  {
    scanf("%d",&n);
    int count=0;
    int a[30]={0};
    for(j=0;n>0;j++)
    {
      a[j]=n%10;
      n=n/10;
      if(a[j]==4)
      {
        count=count+1;
      }
    }
    printf("%d\n",count);  
  }
}
