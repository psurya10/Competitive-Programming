#include<stdio.h>

int main(){
  int t;
  scanf("%d",&t);
  while(t--){
    int rem,max=0,n,k,i;
    scanf("%d%d",&n,&k);
    for(i=1;i<=k;i++){
      rem=n%i;
      if(rem>max)
        max=rem;
    }
    printf("%d\n",max);
  }
}
