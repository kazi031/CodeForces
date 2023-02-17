#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int *p=NULL;
    p=new int[n];
    if(n%2==0)
    {
        int c1=1;
        int pos1=0;
        int pos2=n/2;
        int c2=2;
        for(register int i=0;i<n/2;i++)
        {
            p[pos1]=c1;
            pos1++;
            c1=c1+2;
            p[pos2]=c2;
            pos2++;
            c2=c2+2;
        }
    }
    else
    {
        int x=n;
        x=x-1;
        int c1=1;
        int pos1=0;
        int pos2=x/2+1;
        int c2=2;
        for(register int i=0;i<x/2;i++)
        {
            p[pos1]=c1;
            pos1++;
            c1=c1+2;
            p[pos2]=c2;
            pos2++;
            c2=c2+2;
        }
        p[x/2]=n;
    }
    int k;
    cin>>k;
    cout<<p[k-1];
    delete [] p;
}
