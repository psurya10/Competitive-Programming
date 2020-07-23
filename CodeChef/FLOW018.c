#include<stdio.h>

int main(){
  int t;
  scanf("%d",&t);
  while(t>0){
    int n;
    int fact=1,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
      fact=fact*i;
    if(n==0)
      fact=1;
    printf("%d\n",fact);
    t--;
  }
}
