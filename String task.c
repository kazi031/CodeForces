#include<stdio.h>
int main()
{
    char str[100];
    scanf("%s",str);
    int i;
    int x=strlen(str);
    for(i=0;i<x;i++)
    {
        if((str[i]>='A')&&(str[i]<='Z'))
        {
            str[i]=str[i]+32;
        }
    }
    for(i=0;i<x;i++)
    {
        switch(str[i])
        {
        case 'a':
            {
                str[i]='*';
                break;
            }
        case 'e':
            {
                str[i]='*';
                break;
            }
        case 'i':
            {
                str[i]='*';
                break;
            }
        case 'o':
            {
                str[i]='*';
                break;
            }
        case 'u':
            {
                str[i]='*';
                break;
            }
        case 'y':
            {
                str[i]='*';
                break;
            }
        }
    }
    for(i=0;i<x;i++)
    {
        if(str[i]=='*')
        {
            printf("");
        }
        else
        {
            printf(".%c",str[i]);
        }
    }
    return 0;
}
