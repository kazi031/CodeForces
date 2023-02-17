#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string st;
    cin>>st;
    int flag=0;
    int flag2=0;
    for(int i=0;i<strlen(&st[0]);i++)
    {
        if(st[i]=='0')
        {
            int len1=i;
            while(st[len1]!='1')
            {
                if(st[len1]=='\0')
                {
                    break;
                }
                len1++;
            }
            if(len1-i>flag)
            {
                flag=len1-i;
            }
        }
        if(st[i]=='1')
        {
            int len2=i;
            while(st[len2]!='0')
            {
                if(st[len2]=='\0')
                {
                    break;
                }
                len2++;
            }
            if(len2-i>flag2)
            {
                flag2=len2-i;
            }
        }
    }
    //cout<<flag<<endl;
    //cout<<flag2<<endl;
    int max_flag;
    if(flag>flag2)
    {
        max_flag=flag;
    }
    else
    {
        max_flag=flag2;
    }
    //cout<<max_flag;
    if(max_flag>=7)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
}
