#include <stdio.h>
int main()
    {   
        int a;
        while(scanf("%d",&a)!=EOF)
            {   
                if (((a>=48 && a<=57) + (a>=97 && a<=122) + (a>=65 && a<=90))==1)
                    {
                        printf("Lingliang likes %c!\n",a);

                    }
                else
                    {
                        printf("Ewww\n");
                    }

            }
        
        return 0;

    }