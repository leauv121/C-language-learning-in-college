#include <stdio.h>

int main()
    {
        int n;
        double C;
        double pi=3.14159265358979;
        double r;
        scanf("%d",&n);
        while(n--)
            {
                scanf("%lf",&r);
                C=2*pi*r;
                printf("%.4f\n",C);

            }
        
        return 0;
 
    }
