#include <stdio.h>

int main()
    {
        int T;
        char* name_1="Alice";
        char* name_2="Bob";
        scanf("%d",&T);
        while(T--)
            {   
                int i;
                scanf("%d",&i);
                if(i%2==1)
                    {
                        printf("%s\n",name_1);

                    }
                else
                    {
                        printf("%s\n",name_2);
                    }
        

            }
        

        return 0;


        

    }