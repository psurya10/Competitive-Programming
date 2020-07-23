#include<stdio.h>

int main(){
  int t;
  scanf("%d",&t);
  while(t--){
    float b,hr,da;
    float gs;
    scanf("%f",&b);
    hr=0.1*b;
    da=0.9*b;
    if(b>=1500){
      hr=500;
      da=0.98*b;
    }
    gs=b+hr+da;
    printf("%.2f\n",gs);
  }
}
