#include<cstdio>
#include<cstring>
#include<iostream>
#include<cstdlib>
using namespace std;
int func(char *s1,char *s2);
int main()
{
    string str1;
    cin>>str1;
    //char str1[10]="banglades";
    char str2[10]="hello";
    if(func(&str1[0],str2)==0)
    {
        cout<<"NO";
    }
    else
    {
        cout<<"YES";
    }
}
int func(char *s1,char *s2)
{
    int x,i;
    int len=strlen(s1);
    int len2=strlen(s2);
    int to,j;
    int c1=0;
    //char s3[10];
    int k=0;
    char *s3=NULL;
    for(i=0;i<len;i++)
    {
        int c=0;
        if(s1[i]==s2[0])
        {
            to=i+len2;
            for(j=i;j<=to;j++)
            {
                if(j!=to)
                {
                    k++;
                    s3=(char*)realloc(s3,k*sizeof(char));
                    s3[c]=s1[j];
                    c++;
                }
                else
                {
                    k++;
                    s3=(char*)realloc(s3,k*sizeof(char));
                    s3[c]='\0';
                }
            }
            if((strcmp(s3,s2))==0)
            {
                c1++;
            }
        }
    }
    //printf("%d",c1);
    free(s3);
    return c1;
}

