#include<stdio.h>

int main()
{
  int x;
  float y,f;
  scanf("%d",&x);
  scanf("%f",&y);

  // code starts from here

  if(y>=x+0.5 && x%5==0)
  {
    f=y-x-0.5;
    printf("%.2f",f);
  }

  else
  {
    printf("%.2f",y);
  }

}
