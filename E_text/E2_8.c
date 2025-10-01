#include <stdio.h>
int main()
    {
        int n,sum=0;
        scanf("%d",&n);
        int sumlist[n+2];
        for(int i=1;i<n+1;i++)
            {
                int y_or_n;
                scanf("%d",&y_or_n);
                if(y_or_n==1)
                    {
                        sum+=1;
                        sumlist[sum]=i;
                    }
            }
        int m;
        scanf("%d",&m);
        for(int j=1;j<m+1;j++)
            {
                int ki;
                scanf("%d",&ki);
                if(ki<=sum)
                    {
                        printf("%d\n",sumlist[sum-ki+1]);
                    }
                else
                    {
                        printf("No Way!\n");
                    }
        
            }

    return 0;
    }
//代码不只在于完成，更在于效率，运行速度是十分重要的参考因素，所以每次写完流程图，思考有没有可以简化的部分，每周的答案出来后，对照答案思考自己哪些知识点不熟练，同时学习对方的方法