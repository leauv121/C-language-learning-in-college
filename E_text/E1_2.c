
#include <stdio.h>
int main()
    {
        int n,count=0;
        scanf("%d",&n);
        while(n>5)
            {
                count+=n/5;
                int x=n/5;

                n=n-5*x+x;

            }
        printf("%d",count);
        
        return 0;
    }