#include<iostream>
using namespace std;
int main()
{
    int num;
    cin>>num;
    int *p=new int[num];
    int total_next=0;
    int total=0;
    int c=0;
    for(int i=0;i<num;i++)
    {
        cin>>p[i];
        if(i==0)
        {
            if(p[i]>=20)
            {
                c++;
            }
            else
            {
                total_next=total_next+p[i];
            }
        }
        else
        {
            if((p[i]<20))
            {
                total=total+total_next;
                if(total>=20)
                {
                    c++;
                    total=0;
                    total_next=0;
                }
                total_next=total_next+p[i];
            }
            else
            {
                c++;
            }

        }
    }
    cout<<c;
    delete [] p;
}
