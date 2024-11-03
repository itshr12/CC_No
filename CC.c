#include<stdio.h>
#include<string.h>
int main()
{
    int q,w,e,s,d,ss,dd,ff;
    char ch[20];
    printf("enter CC number :");
    scanf("%s",ch);
    q=0;
    ss=0;
    for(w=15;w>=0;w--)
    {
        ch[w]=ch[w]-'0';
        if(w%2==0)
        {
            ch[w]=ch[w]*2;
            ch[w]=ch[w]>=10?ch[w]-9:ch[w];
            ss=ss+ch[w];
        }
        if(w%2!=0)
        {
            ss=ss+ch[w];
        }
    }
    if(ss%2!=0)
    {
        printf("invalid CC");
    }
    else
    {
        printf("valid CC");
    }

}