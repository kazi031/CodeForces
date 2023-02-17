#include<iostream>
using namespace std;
int main()
{
    int n;      /*(number of types of coins)*/
    cin>>n;
    int t;      /*(number of tables to be designed)*/
    cin>>t;
    /*input thickness of coins in hundreds of mm*/
    int *p=new int[n];
    for(int i=0;i<n;i++)
    {
        int thickness;
        cin>>thickness;
        p[i]=thickness;
    }
    /*Input desired table heights*/
    int *q=new int[t];
    for(int i=0;i<t;i++)
    {
        int desired_thickness;
        cin>>desired_thickness;
        q[i]=desired_thickness;
    }
    for(int i=0;i<t;i++)
    {
        int req_height=q[i];

    }
    delete [] p;
    delete [] q;
}
