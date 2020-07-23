#include<stdio.h>

int main(){
  int n;
  scanf("%d",&n);
  while(n){
    int t;
    scanf("%d",&t);
    int count=0,i;
    for(i=2;i<t;i++){
      if(t%i==0)
        count+=1;
    }
    if(count>0)
      printf("no\n");
    else
      printf("yes\n");
    n--;
  }
}
