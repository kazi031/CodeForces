#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int hour;
    int n;
    hour = a;
    int w_o_c=a;
    int n_c=0;
    while(w_o_c>=b)
    {
        n_c=w_o_c/b;
        hour=hour+n_c;
        w_o_c=n_c+(w_o_c%b);
    }
    cout<<hour;
}
