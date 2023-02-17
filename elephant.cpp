#include<iostream>
using namespace std;
int main()
{
    int x;
    cin>>x;
    int arr[5]={5,4,3,2,1};
    int count=0;
    int c;
    if(x>5)
    {
        c=x%5;
        count=x/5;
        if(c==4)
        {
            count++;
        }
        else if(c==3)
        {
            count++;
        }
        else if(c==2)
        {
            count++;
        }
        else if(c==1)
        {
            count++;
        }
    }
    else
        count++;
    cout<<count;
}
