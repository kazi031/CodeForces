#include<iostream>
using namespace std;
int main()
{
    int *p=NULL;
    int n;
    cin>>n;
    p=new int[n];
    int total=0;
    for(int i=0;i<n;i++)
    {
        cin>>p[i];
        total=total+p[i];
    }
    for(int t=0;t<n-1;t++)
    {
        for(int t1=t+1;t1<n;t1++)
        {
            if(p[t]<p[t1])
            {
                int temp;
                temp=p[t];
                p[t]=p[t1];
                p[t1]=temp;
            }
        }
    }
    //cout<<total<<endl;
    int half=total/2;
    //cout<<half<<endl;
    int c=0;
    int j=0;
    while(c<=half)
    {
        c=c+p[j];
        j++;

    }
    cout<<j;
    delete [] p;
}
