#include <stdio.h>
int main()
    {
        unsigned a,b;
        int T;
        scanf("%d",&T);

        while(T--)
            {
                scanf("%u%u",&a,&b);
                printf("%u %u %u %u %u %u\n",~a,a&b,a|b,a^b,a<<b,a>>b);
                
            }
        return 0;
    }   