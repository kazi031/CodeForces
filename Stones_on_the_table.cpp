#include<iostream>
using namespace std;
int main()
{
    char *p=NULL;
    int num;
    cin>>num;
    char temp;
    int c=0;
    p=new char[num];
    for(int i=0;i<num;i++)
    {
        if(i==0)
            cin>>p[i];
        else
        {
            cin>>p[i];
            if(p[i]==p[i-1])
            {
                c++;
            }
        }
    }
    cout<<c;
    delete [] p;
}
