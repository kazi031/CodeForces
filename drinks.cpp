#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int n,perc;
    cin>>n;
    int total=0;
    for(int i=0;i<n;i++)
    {
        cin>>perc;
        total=total+perc;
    }
    printf("%.12lf",(double)total/n);
    return 0;
}
