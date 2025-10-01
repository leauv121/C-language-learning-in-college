#include <stdio.h>
#include <math.h>
    int main()
        {
            int n;
            scanf("%d",&n);
            while(n--)
                {
                    unsigned int a;
                    scanf("%u",&a);
                    long long count=0;
                    int times=32;
                    
                    while(times--)
                        {
                            unsigned int inter=a;
                            int i=(inter>>times)&1;
                            
                            
                            
                            count+=i;
                        }
                    
                    printf("%lld\n",count);

                }
            return 0;
        }