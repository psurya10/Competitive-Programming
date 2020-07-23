#include<stdio.h>

int main()
{
  int t;
  char a;
  int i;
  scanf("%d\n",&t);
  for(i=0;i<t;i++)
  {
    scanf("%c\n",&a);
    if(a=='B' || a=='b')
    {
      printf("BattleShip\n");
    }

    else if(a=='C' || a=='c')
    {
      printf("Cruiser\n");
    }

    else if(a=='D' || a=='d')
    {
      printf("Destroyer\n");
    }

    else if(a=='F' || a=='f')
    {
      printf("Frigate\n");
    }

    else
    {
      continue;
    }

  }
}
