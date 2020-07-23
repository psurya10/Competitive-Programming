#include<stdio.h>

int main(){
  int t,a,c;
  float b;
  scanf("%d",&t);
  while(t--){
    scanf("%d%f%d",&a,&b,&c);
    if(a>50 && b<0.7 && c>5600)
      printf("10\n");
    else if(a>50 && b<0.7)
      printf("9\n");
    else if(c>5600 && b<0.7)
      printf("8\n");
    else if(a>50 && c>5600)
      printf("7\n");
    else if(a>50 || b<0.7 || c>5600)
      printf("6\n");
    else
      printf("5\n");
  }
}
