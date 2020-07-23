#include <stdio.h>
int main()
{
    int i,n,t;
    int a[]={1,2,4,8,16,32,64,128,256,512,1024,2048};
    scanf("%d",&t);
    while(t>0)
    {
        int b=0;
        scanf("%d",&n);
        for(i=11;i>=0;i--)
        {
            if(n>=a[i])
            {
                b=b+(n/a[i]);
                n=n%a[i];
            }
        }
        printf("\n%d\n",b);
        t--;
    }
    return 0;
}
