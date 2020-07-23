#include<stdio.h>

int  main(){
  int t;
  scanf("%d",&t);
  int arr[200],m=0,n,j,k;
  int temp=0,x=0;
  while(t--){
     scanf("%d",&n);
     arr[m]=1;
     m++;
     for(j=n;j>=1;j--)
     {
         for(k=0;k<m;k++)
         {
             x=arr[k]*j+temp;
             arr[k]=x%10;
             temp=x/10;
         }
         if(temp>0)
         {
             while(temp!=0)
             {
                 arr[m]=temp%10;
                 temp=temp/10;
                 m++;
             }
         }
     }
     for(j=m-1;j>=0;j--)
         printf("%d",arr[j]);
     printf("\n");
     m=0;
    }
  }
