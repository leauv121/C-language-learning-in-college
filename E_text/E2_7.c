#include <stdio.h>
#include <math.h>
#define eps 1e-10

int main()
    {
        double a,b,c;
        scanf("%lf%lf%lf",&a,&b,&c);
        double result1=b*b;
        double result2=4*a*c;
        int result3=fabs(result1-result2)<eps;
        
        if(fabs(a)<eps && b!=0)
            {
                printf("Just one root: %.2lf",(double)(-c)/b);
            }
        else if(fabs(a)<eps && fabs(b)<eps &&fabs(c)<eps)
            {
                printf("Infroots");
            }
        else if(fabs(a)<eps && fabs(b)<eps && c!=0)
            {
                printf("No Root");
            }
        else if(result3 && a!=0)
            {
                double x=(double)(-b)/(2*a);
                printf("The same two roots: %.2lf",x);
            }
        else if((result1-result2)>0 && a!=0)
            {
                double x1=(double)(-b+sqrt(result1-result2))/(2*a);
                double x2=(double)(-b-sqrt(result1-result2))/(2*a);
                if(fabs(x1-x2)>eps)
                    {
                        printf("%.2lf %.2lf",x1,x2);
                    }
                else
                    {
                        printf("%.2lf %.2lf",x2,x1);
                    }

                
            }
        else if((result1-result2)<0 && a!=0)
            {
                printf("No Root");
            }
        return 0;

    }
    //要学会自己发现问题解决问题，遇到运行的错误，如果是语法的话去找AI查找，如果是思路的问题自己逐步推理分析哪里出了问题，如果是方法不会可以去答疑群请教
    //测试失败的时候，关注几个检验点，自查问题，我的代码是否是题目要求的等价转化，有没有我没考虑的问题
    //if else if else 的顺序也是很重要的考虑因素！
    //只有经过浮点数计算得到的0才有精度文体，而从输入中获得的浮点数0是精确的
    