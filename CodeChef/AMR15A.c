#include<stdio.h>
int main()
{
	int a,b[100],i,c1=0,c2=0;
	scanf("%d",&a);
	for(i=0;i<a;i++){
		scanf("%d",&b[i]);
	}
	for(i=0;i<a;i++){
		if(b[i]%2==0){
			c1++;
		}
		else{
			c2++;
		}
	}
	if(c2>=c1){
		printf("NOT READY");
	}
	else{
	printf("READY FOR BATTLE");
	}
	return 0;
}

