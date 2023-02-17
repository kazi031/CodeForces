#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int *p=NULL;
    p=new int[n];
    int count=0;
    int total=0;
    for(int i=0;i<n;i++)
    {
        int k;
        cin>>k;
        p[i]=k;
        if(k==4)
        {
            count++;
            p[i]=0;
        }
        else
        {
            for(int j=0;j<i;j++)
            {
                if(p[j]+k==4)
                {
                  p[j]=0;
                  p[i]=0;
                  count++;
                  break;
                }
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        if(p[i]==3)
        {
            count++;
            p[i]=0;
        }
        else
        {
           total=total+p[i];
        }
    }
    if(total==0)
    {
        count=count+0;
    }
    else if(total%4==0)
    {
        total=total/4;
        count=count+total;
    }
    else
    {
        total=total/4+1;
        count=count+total;
    }
    cout<<count;
    delete p;
}
