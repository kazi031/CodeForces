#include<iostream>
#include<math.h>
#include<stdio.h>
#include<sstream>
#include<cstring>
using namespace std;
bool int_to_str(int x);
int main()
{
    int x;
    scanf("%d",&x);
    bool n = int_to_str(x);
    if(n == true)
    {
        printf("YES");
        return 0;
    }
    else
    {
        int c = 0;
        for(int i=1;i<=sqrt(x);i++)
        {
            if(x%i == 0)
            {
                int temp = x/i;
                if(int_to_str(temp)==1 || int_to_str(i)==1)
                {
                    c++;
                }
            }
        }
        if(c==0)
        {
            printf("NO");
        }
        else
        {
            printf("YES");
        }
        return 0;
    }
}
bool int_to_str(int x)
{
    string str;
    stringstream geek;
    geek << x;
    str = geek.str();
    //printf("%s\n",&str[0]);
    int len = strlen(&str[0]);
    int c = 0;
    for(int i=0;i<len;i++)
    {
        if(str[i]=='4' || str[i]=='7')
        {
            c++;
        }
    }
    //printf("%d %d",c,len);
    if(c==len)
    {
        return true;
    }
    else
        return false;
}
