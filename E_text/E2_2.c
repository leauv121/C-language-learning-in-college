#include <stdio.h>
int main()
    {
        
        char word[200000] = {0};
        scanf("%s",word);
        
        int i=0;
        int count=0;
        while(word[i]!=0)
            {
              char ck=word[i];
              if(((ck=='a')+(ck=='e')+(ck=='i')+(ck=='o')+(ck=='u')+(ck=='A')+(ck=='E')+(ck=='I')+(ck=='O')+(ck=='U'))==1)
                {   
                    count++;
                }
              i++;
            }
        
        printf("%d",count);
        return 0;

//这道题不需要运用数组，因为它只是统计原因出现次数，不需要进行储存记忆

        
        

    }