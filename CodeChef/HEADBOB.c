#include <stdio.h>

int main(void)
{
	int t;
	scanf("%d",&t);
	while(t>0)
  {
	    int n;
	    scanf("%d",&n);
	    int i=0;
	    char x[n];
	    scanf("%s",x);
	    while(i<n)
      {
	        if(x[i]=='I')
          {
	            printf("INDIAN\n");
	            break;
	        }
	        else if(x[i]=='Y')
          {
	            printf("NOT INDIAN\n");
	            break;
	        }
	        i++;
	    }
	    if(i==n){
	        printf("NOT SURE\n");
	    }else{
	        i=0;
	    }
	    t--;
	}
	return 0;
}
