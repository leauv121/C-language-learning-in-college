#include <stdio.h>
int main()
    {
        int n,m;
        scanf("%d %d",&n,&m);
        if(m==0)
            {
                printf("%d",n);

            }
        else
            {
                n=n%m;
                printf("%d",n);
            }
        
        return 0;
    }
