#include <stdio.h>
int main()
    {
        int n,length;
        scanf("%d",&n);
        int m=n-1;
        char downline='_';
        char name='M';
        printf("%c",name);
        
        while(m--)
            {
                scanf("%d",&length);
                
                while(length--)
                    {
                        printf("%c",downline);

                    }
                printf("%c",name);
            }
        
        return 0;

    }

    