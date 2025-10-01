#include <stdio.h>
int main()
    {
        int n,m;
        int num;
        int light[1002]={0};//定义在int main 前的数组内值自动为0，所以以后在编写代码的时候将主要数组定义为全局变量
        int i=0;
        scanf("%d%d",&n,&m);
        while(m--)
            {
                scanf("%d",&num);
                int index=num-1;
                if(index==0)
                    {
                        light[index]=1-light[index];
                        light[index+1]=1-light[index+1];
                        light[n-1]=1-light[n-1];
                    }
                else if(index==n-1)
                    {
                        light[index]=1-light[index];
                        light[index-1]=1-light[index-1];
                        light[0]=1-light[0];

                    }
                else
                    {
                        light[index-1]=1-light[index-1];
                        light[index]=1-light[index];
                        light[index+1]=1-light[index+1];

                    }
                
            }
        while(n--)
            {
                printf("%d ",light[i]);
                i++;
            }
        //修改为循环次数固定的，使用for循环
        //for(int i =1;i<=n;i++)
        //{printf。。。。}


    }