#include<iostream>
using namespace std;
int distinct(int n)
{
    int arr[4];
    int i=0;
    while(n!=0)
    {
        arr[i]=n%10;
        n=n/10;
        i++;
    }
    int c=0;
    for(int i=0;i<3;i++)
    {
        for(int j=i+1;j<4;j++)
        {
            if(arr[i]==arr[j])
                c++;
        }
    }
    if(c==0)
    {
        return 1;
    }
    else
    {
        return -1;
    }
}

int main()
{
    int n;
    cin>>n;
    int k=n;
    k=k+1;
    /*while(1)
    {
        k++;
        if(distinct(k)==1)
        {
            break;
        }
    }*/
    while(distinct(k)!=1)
    {
        k++;
    }
    cout<<k;
}
