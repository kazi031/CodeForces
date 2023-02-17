#include<iostream>
using namespace std;
int GCD(int a,int b);
int main()
{
    int n;
    cin>>n;
    int gcd=0;
    int highest_number=0;
    for(int i=0;i<n;i++)
    {
        int num;
        cin>>num;
        if(num>highest_number)
        {
            highest_number=num;
        }
        if(i==0)
        {
            gcd=num;
        }
        else
        {
            gcd=GCD(gcd,num);
        }
    }
    int t;
    cout<<highest_number<<" "<<gcd;
}
int GCD(int a,int b)
{
    if(a>b)
    {
        int rem=a%b;
        while(rem!=0)
        {
            a=b;
            b=rem;
            rem=a%b;
        }
        return b;
    }
    else if(b>a)
    {
        int rem=b%a;
        while(rem!=0)
        {
            b=a;
            a=rem;
            rem=b%a;
        }
        return a;
    }
    else
    {
        return a;
    }
}
