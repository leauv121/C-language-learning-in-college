#include <stdio.h>
int main()
    {
        long n;
        scanf("%ld",&n);
        long j=0;
    
        while(j<=n)
            {
                long count=0;
                long inter=j;
                while(inter!=0)
                    {
                        if(inter%2==1)
                            {
                                count++;
                            }
                        inter=inter/2;
                        
                    }
                printf("%ld ",count);
                j++;

            }
        return 0;
    }
 