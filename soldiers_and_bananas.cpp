#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int k,n,w;
    scanf("%d %d %d",&k,&n,&w);
    int total = k*w*(w+1)/2;
    if(total<n)
    {
        printf("%d",0);
    }
    else
    {
        printf("%d",total-n);
    }
}
