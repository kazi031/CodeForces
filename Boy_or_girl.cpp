#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int len=strlen(&s[0]);
    int size=len;
    for(int i=0;i<len-1;i++)
    {
        if(s[i]==']')
        {
            continue;
        }
        else
        {
        for(int j=i+1;j<len;j++)
        {
            if(s[j]!=']')
            {
                if(s[j]==s[i])
                {
                    s[j]=']';
                    size--;
                }
            }
        }
        }
    }
    if(size%2==0)
    {
        cout<<"CHAT WITH HER!";
    }
    else
    {
        cout<<"IGNORE HIM!";
    }

}
