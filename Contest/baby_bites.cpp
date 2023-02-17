#include <iostream>
#include<cctype>
#include <sstream>
using namespace std;

int string_to_int(string s)
{
    stringstream geek(s);
    int x = 0;
    geek >> x;
    return x;
}
int main()
{
    int n,c=0;
    cin>>n;
    string st1;
    for(int i=1;i<=n;i++)
    {
        cin>>st1;
        if(st1=="mumble")
        {
            c++;
        }
        else
        {
            int k=string_to_int(st1);
            if(k==i)
            {
                c++;
            }
        }
    }
    if(c==n)
    {
        cout<<"makes sense";
    }
    else
    {
        cout<<"something is fishy";
    }
}

