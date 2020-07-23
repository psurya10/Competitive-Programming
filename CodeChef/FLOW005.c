#include <stdio.h>
int main()
{
    int i,n,t;
    int a[]={1,2,5,10,50,100};
    scanf("%d",&t);
    while(t>0)
    {
        int b=0;
        scanf("%d",&n);
        for(i=5;i>=0;i--)
        {
            if(n>=a[i])
            {
                b=b+(n/a[i]);
                n=n%a[i];
            }
        }
        printf("%d\n",b);
        t--;
    }
    return 0;
}
