#include<stdio.h>

int main(){
  int t;
  scanf("%d",&t);
  int a,b;
  while(t>0){
    scanf("%d%d",&a,&b);
    if(a>b){
      printf("%d",a);
    }
    else{
      printf("%d",b);
    }
    printf(" %d\n",a+b);
    t--;
  }
}
