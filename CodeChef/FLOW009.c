#include <stdio.h>

int main(void) {
    int t;
    scanf("%d", &t);
    while(t--){
        int q;
        double p, gross;
        scanf("%lf %d", &p, &q);
        if(p >= 1000){
            p = p-(p*0.1);
        }
        gross = q*p;
        printf("%lf\n", gross);
        
    }
	return 0;
}

