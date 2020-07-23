#include <stdio.h>

int main(void) {
	int n;
	scanf("%d", &n);
	while(n != 0) {
	    int a[n], f = 0;
	    for(int i = 1; i <= n; i++)
	        scanf("%d", &a[i]);
	   for(int i = 1; i <= n; i++) {
	       if(i != a[i] && a[a[i]] != i) {
	           f = 1;
	           break;
	       }
	   }
	   if(f == 0)
	       printf("ambiguous\n");
	   else
	       printf("not ambiguous\n");
	   scanf("%d", &n);    
	}
	return 0;
}

