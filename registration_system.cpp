#include<iostream>
#include<sstream>
using namespace std;
class Registration
{
private:
    string name;
    int num;
public:
    Registration()
    {
        num=0;
    }
    void set_name(string k)
    {
        name=k;
    }
    string get_name()
    {
        return name;
    }
    void set_num()
    {
        num=num+1;
    }
    int get_num()
    {
        return num;
    }

};
int search(Registration* p,int num,string st)
{
    for(int i=0;i<num;i++)
    {
        if(p[i].get_name()==st)
        {
            return i;
        }
    }
    return -1;
}
void display(string* p,int num)
{
    for(int i=0;i<num;i++)
    {
        cout<<p[i]<<endl;
    }
}
string int_to_string(int x)
{
    ostringstream s;
    s << x;
    string k=s.str();
    return k;
}
int main()
{
    string st1,st2;
    /*cin>>st1;*/
    int num;
    cin>>num;
    Registration* r=NULL;
    r=new Registration[num];
    string* p=NULL;
    p=new string[num];
    for(int i=0;i<num;i++)
    {
        cin>>st1;
        if(i==0)
        {
            r[i].set_name(st1);
            p[i]="OK";
        }
        else
        {
            int x=search(r,i,st1);
            if(x!=-1)
            {
                r[x].set_num();
                int i=r[x].get_num();
                string st=int_to_string(i);
                st1=st1+st;
                st2=st1;
            }
            if(st2!=st1)
            {
                p[i]="OK";
            }
            else
            {
                p[i]=st1;
            }
            r[i].set_name(st1);
        }
    }
    display(p,num);
    delete [] r;
    delete [] p;
}
