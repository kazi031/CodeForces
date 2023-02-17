#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int *p=new int[n];
    int c1=0,c2=0,c3=0,c4=0;
    for(int i=0;i<n;i++)
    {
        int k;
        cin>>k;
        p[i]=k;
        if(p[i]==1)
        {
            c1++;
        }
        if(p[i]==2)
        {
            c2++;
        }
        if(p[i]==3)
        {
            c3++;
        }
        if(p[i]==4)
        {
            c4++;
        }
    }
    /*cout<<c1<<endl;
    cout<<c2<<endl;
    cout<<c3<<endl;
    cout<<c4<<endl;*/
    int k31=0;
    int k1_extra=0;
    int k2_extra=0;
    int k3_extra=0;
    if(c1>c3)
    {
        k31=c3;
        k1_extra=c1-c3;
    }
    else if(c1<c3)
    {
        k31=c1;
        k3_extra=c3-c1;
    }
    else if(c1==c3)
    {
        k31=c1;
    }
    int k22=0;
    k2_extra=(c2*2)%4;
    k22=(c2*2)/4;
    int k21=0;
    if(k2_extra==2)
    {
        if(k1_extra==2)
        {
            k21=1;
            k1_extra=k1_extra-2;
        }
        else if(k1_extra>2)
        {
            k1_extra=k1_extra-2;
            k21=1;
        }
        else if(k1_extra==1)
        {
            k1_extra=k1_extra-1;
            k21=1;
        }
        else
        {
            k21=1;
        }
    }
    else
    {
        k21=0;
    }
    int k11=0;
    if(k1_extra==0)
    {
        k11=0;
    }
    else if(k1_extra<=4)
    {
        k11=1;
    }
    else
    {
        if(k1_extra%4==0)
        {
            k11=k1_extra/4;
        }
        else
        {
            k11=k1_extra/4+1;
        }
    }
    int total=k31+k3_extra+c4+k22+k21+k11;
    cout<<total;
    delete [] p;
}

