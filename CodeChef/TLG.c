#include<stdio.h>

int main(){
  int n,i;
  scanf("%d",&n);
  int a[n+1],b[n+1],c[n+1];
  int w[n+1];
  a[0]=0;
  b[0]=0;
  int q,max;
  max=0;
  q=0;
  for(i=1;i<=n;i++){
    scanf("%d%d",&a[i],&b[i]);
    a[i]+=a[i-1];
    b[i]+=b[i-1];
    if(a[i]>b[i]){
      c[i]=a[i]-b[i];
      w[i]=1;
    }
    else{
      c[i]=b[i]-a[i];
      w[i]=2;
    }
    if(c[i]>max){
      max=c[i];
      q=i;
  }
  }

  printf("%d %d",w[q],c[q]);
  return 0;
}
