#include<stdio.h>

int main(){
  int t;
  scanf("%d",&t);
  while(t){
    int n;
    scanf("%d",&n);
    int a[n];
    int i;
    int count=0;
    for(i=0;i<n;i++){
      scanf("%d",&a[i]);
    }
    int max=0;
    for(i=0;i<n;i++){
      if(max<a[i])
        max=a[i];
    }
    int f=0,j=0; //flag to know whether it is done completely or we found a sol
    for(i=max;i>0;i--){
      count=0;
      for(j=0;j<n;j++){
        if(a[j]%i==0)
          count+=1;
      }
      if(count==n){
        f=1;
        max=i;
        break;
      }
    }
    if(f==1){
      for(i=0;i<n;i++){
        printf("%d ",a[i]/max);
      }
    }
    else{
      for(i=0;i<n;i++){
        printf("%d ",a[i]);
      }
    }
    t--;
  }
}
