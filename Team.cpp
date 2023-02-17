#include<iostream>
using namespace std;
int main()
{
    int x;
    int c1;
    cin>>x;
    int r=0;
    for(int i=0;i<x;i++)
    {
        int c=0;
        for(int j=0;j<3;j++)
        {
            cin>>c1;
            if(c1==1)
                c++;
        }
        if((c>1) && (c<4))
            r++;
    }
    cout<<r;
}
