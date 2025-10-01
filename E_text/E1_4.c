#include <stdio.h>
int main()
    {
        int n;
        scanf("%d/n",&n);
        while(n--)
            {
                int number;
                scanf("%d",&number);
                int check1=number/1000,check2=number%1000;
                char* name1="chuanyuan";
                char* name2="shie";
                
                
                
                if(check1==25371)
                    {
                        printf("%s %03d\n",name1,check2);
                    }
                
                if(check1==25373)
                    {
                        printf("%s %03d\n",name2,check2);
                    }
                
        



            }
        
        return 0;

    }