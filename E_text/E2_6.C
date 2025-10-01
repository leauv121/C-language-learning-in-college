#include <stdio.h>
int distant[100000]={0};
long long prefix_sum[100002]={0};
int main()
    {
        int n,q;
        scanf("%d",&n);
        for(int i=2;i<=n;i++)
            {
                int d;
                scanf("%d",&d);
                prefix_sum[i] =prefix_sum[i-1]+d;
            }
        scanf("%d",&q);
        while(q--)
            {
                int s,t;
                scanf("%d %d",&s,&t);  
                if(s==1)
                    {
                        printf("%lld\n",prefix_sum[t]+(t-s)*190);
                        

                    }
                else
                    {
                        printf("%lld\n",(t-s)*190+prefix_sum[t]-prefix_sum[s]);
                    }
                
                
            }
        return 0;
    }
    //变量命名在循环内比较好，因为作用范围下，bug出现的概率就小很多，所以要学会习惯使用for循环，
    //还有就是关于数组的下标，我们可以按照题目原本的数字标号来进行设置，比如说数组第一个可以不用填写，从第二个开始刚好第一个对应下标的一，这样在处理下标比较复杂的问题的时候会十分方便