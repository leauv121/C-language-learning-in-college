#include <stdio.h>
int main()
    {
        char word[100000]={0};
        scanf("%s",word);
        int i=0;
        while(word[i]!=0)
            {   if(i==0)
                    {
                        printf("%c",word[i]);
                        i++;
                    }
                else if((word[i-1]=='a'|| word[i-1]=='e' || word[i-1]=='i'|| word[i-1]=='o' || word[i-1]=='u') && word[i]=='r')
                    {   
                        i++;
                    }
                else
                    {
                        printf("%c",word[i]);
                        i++;
                    }
            }   
        return 0;
    }
//临时储存的思路：这道题是要比较前面和后面，需要短时记忆前面的内容，所以可以设置变量来记录
//int pre=0,cur,n=0  (cur记录当前字符，pre记录前一个字符)
//while((cur=getchar())!=EOF)
// if... else if ... else if... 
//pre=cur


//长时间储存——数组的简化过程
//char str[100010]
//int c,n=0
//while(c=getchar()!=EOF)
//{str[n++]=c}  !!!关注这里的自动加index的操作
