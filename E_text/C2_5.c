#include <stdio.h>
int main()
    {   
        int n,x;
        int i=0;
        int count=1;
        scanf("%d%d",&n,&x);
        int Score[n];
        while(i<n)
            {
                scanf("%d",&Score[i]);
                i++;
            }
        
        int c=0;
        while(c<n)
            {
                if(x<Score[c])
                    {
                        count++;
                    }
                c++;

            }
        printf("%d",count);
        return 0;

    }