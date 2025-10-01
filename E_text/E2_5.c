#include <stdio.h>
int main()
    {
        int n,k;
        scanf("%d%d",&n,&k);
        int n2=n;
        int list[101]={0};
        int i=0;
        int j=0;
        int index;
        while(n--)
            {
                scanf("%d",&list[i]);
                i++;
            }
        while(k--)
            {
                scanf("%d",&index);
                list[index-1]=0;

            }
        while(n2--)
            {
                printf("%d ",list[j]);
                j++;
            }
        
        return 0;
        


    }