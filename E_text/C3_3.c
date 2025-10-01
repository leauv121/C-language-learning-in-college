#include <stdio.h>
int main()
    {
        int n;
        scanf("%d",&n);
        while(n--)
            {
                long long a;
                int times=64;
                int n=0;
                scanf("%lld",&a);
                while(times--)
                {   long long inter=a;
                    
                    if(n!=0 && n%4==0)
                        {
                            printf(" %lld",(inter>>(times))&1);
                        }
                    else
                        {
                            printf("%lld",(inter>>(times))&1);

                        }
                    n++;
                }
        
                printf("\n");
            }
        return 0;
    }