#include <stdio.h>
int main()
    {
        int x0,y0,vx,vy,t,xt,yt;
        scanf("%d %d",&x0,&y0);
        scanf("%d %d",&vx,&vy);
        scanf("%d",&t);

        xt=x0+vx*t;
        yt=y0+vy*t;

        printf("%d %d",xt,yt);

        return 0;



    }   