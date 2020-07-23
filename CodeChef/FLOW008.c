#include<stdio.h>

int main(){
  int t;
  scanf("%d",&t);
  int n;
  while(t>0){
    scanf("%d",&n);
    if(n<10)
      printf("What an obedient servant you are!\n");
    else
      printf("-1\n");
  t--;
  }
}
