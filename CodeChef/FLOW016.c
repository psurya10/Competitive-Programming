#include<stdio.h>

int main(){
  int t;
  scanf("%d",&t);
  while(t--){
    long int a,b,l;
    long int num,den,rem;
    scanf("%ld%ld",&a,&b);
    if(a>b){
      num=a;
      den=b;
    }
    else{
      num=b;
      den=a;
    }
    rem=num%den;
    while(rem!=0){
      num=den;
      den=rem;
      rem=num%den;
    }
    l=(a*b)/den;
    printf("%ld %ld\n",den,l);
  }
}
