#include <iostream>
using namespace std;
int main()
{
    int t_c;
    cin>>t_c;
    int *p=NULL;
    p=new int[t_c];
    for(int i=0;i<t_c;i++)
    {
        int n;
        cin>>n;
        int n_black=(n/2)+1;
        int n_white=(n/2);
        int x,y;
        cin>>x>>y;
        if((x>=n_black) && (y>=n_white))
        {
            p[i]=1;
        }
        else
        {
            p[i]=0;
        }
    }
    for(int j=0;j<t_c;j++)
    {
        if(p[j]==1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    delete [] p;
}
