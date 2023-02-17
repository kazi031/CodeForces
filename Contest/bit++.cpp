#include<iostream>
using namespace std;
int main()
{
    string st1;
    int X=0;
    int x;
    cin>>x;
    for(int i=0;i<x;i++)
    {
        cin>>st1;
        if(st1[0]=='+')
        {
            X++;
        }
        else if(st1[2]=='+')
        {
            X++;
        }
        else
        {
            X--;
        }
    }
    cout<<X;
}
