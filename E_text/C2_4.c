#include <stdio.h>
int main()
    {
        int n;
        int i=0;
        scanf("%d",&n);
        long long int Nlist[n];
        
        while(i<n)
            {
                scanf("%lld",&Nlist[i]);
                i++;
            }
        n=n-1;
        while(n>=0)
            {
                printf("%lld ",Nlist[n]);
                n--;
            }
        return 0;
    }