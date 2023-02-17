#include<stdio.h>
#include<string.h>
int main()
{
    int n,length,i,j;
    scanf("%d",&n);
    char s[n][100];
    for(i=0;i<n;i++)
    {
        scanf("%s",s[i]);
    }
    for(i=0;i<n;i++)
    {
        int count=0;
        length=strlen(s[i]);
        if(length>10 && length<=100)
        {
            for(j=1;j<length-1;j++)
            {
                count++;
            }
            printf("%c%d%c\n",s[i][0],count,s[i][length-1]);
        }
        else if(length>100)
        {
            printf("%c%d%c\n",s[i][0],98,s[i][99]);
        }
        else
        {
            printf("%s\n",s[i]);
        }
    }

    return 0;
}
