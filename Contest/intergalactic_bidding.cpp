#include<iostream>
using namespace std;
struct Info
{
    string name;
    int bid;
public:
    void set_name(string x)
    {
        name=x;
    }
    void set_bid(int x)
    {
        bid=x;
    }
    string get_name()
    {
        return name;
    }
    int get_bid()
    {
        return bid;
    }
};
int main()
{
    int n,k;
    cin>>n>>k;
    string st1;
    int bid;
    Info *mem=new Info[n];
    for(int i=0;i<n;i++)
    {
        cin>>st1;
        mem[i].set_name(st1);
        cin>>bid;
        mem[i].set_bid(bid);
    }
    int total=0;
    for(int i=0;i<n;i++)
    {
        cout<<mem[i].get_name()<<" "<<mem[i].get_bid()<<endl;
    }
    delete [] mem;
}
