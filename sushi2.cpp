#include<iostream>
#include<cstdlib>
using namespace std;
class Stack
{
    int *p;
    int size;
    int top;
public:
    Stack()
    {
        p=NULL;
        size=0;
        top=-1;
    }
    void push_back(int a)
    {
        size++;
        p=(int*)realloc(p,size*sizeof(int));
        top++;
        p[top]=a;
    }
    int pop_top()
    {
        size--;
        int t=p[top];
        top--;
        p=(int*)realloc(p,size*sizeof(int));
        return t;
    }
    void display()
    {
        if(size==0)
        {
            cout<<"The stack is empty"<<endl;
        }
        else
        {
            for(int i=0;i<size;i++)
            {
                cout<<p[i]<<" ";
            }
            cout<<endl;
        }
    }
    bool isEmpty()
    {
        if(size==0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    void dispose()
    {
        delete [] p;
    }
    ~Stack()
    {
        dispose();
    }
};
int main()
{
    Stack s1;
    int flag1=0;
    int flag2=0;
    /*s1.push_back(1);
    s1.push_back(2);
    s1.push_back(1);
    s1.push_back(1);
    s1.push_back(1);
    s1.display();
    cout<<s1.pop_top()<<" has been popped!"<<endl;
    cout<<s1.pop_top()<<" has been popped!"<<endl;
    cout<<s1.pop_top()<<" has been popped!"<<endl;
    cout<<s1.pop_top()<<" has been popped!"<<endl;
    cout<<s1.pop_top()<<" has been popped!"<<endl;
    s1.display();
    cout<<s1.isEmpty()<<endl;*/
    int *p=NULL;
    int num;
    cin>>num;
    p=new int[num+1];
    for(int i=0;i<num;i++)
    {
        cin>>p[i];
    }
    if(p[num-1]==1)
    {
        p[num]=2;
    }
    else
    {
        p[num]=1;
    }
    for(int i=0;i<num;i++)
    {
        if(s1.isEmpty()==1)
        {
            if(p[i]==1)
            {
                int len1=i;
                while(p[len1]!=2)
                {
                    len1++;
                    s1.push_back(p[len1]);
                }
                int len2=len1;
                while(p[len2]!=1)
                {
                    if(s1.isEmpty()!=1)
                    {
                        s1.pop_top();
                        len2++;
                    }
                    else
                    {
                        s1.dispose();
                        break;
                    }
                }
                len2=len2-len1;
                len1=len1-i;
                if(len1==len2)
                {
                    if(len1+len2>flag1)
                    {
                        flag1=len1+len2;
                    }
                }
                else if(len1>len2)
                {
                    if(2*len2>flag1)
                    {
                        flag1=2*len2;
                    }
                }
            }
            else
            {
                int len1=i;
                while(p[len1]!=1)
                {
                    len1++;
                    s1.push_back(p[len1]);
                }
                int len2=len1;
                while(p[len2]!=2)
                {
                    if(s1.isEmpty()!=1)
                    {
                        s1.pop_top();
                        len2++;
                    }
                    else
                    {
                        s1.dispose();
                        break;
                    }
                }
                len2=len2-len1;
                len1=len1-i;
                if(len1==len2)
                {
                    if(len1+len2>flag2)
                    {
                        flag2=len1+len2;
                    }
                }
                else if(len1>len2)
                {
                    if(2*len2>flag2)
                    {
                        flag2=2*len2;
                    }
                }
            }
        }
    }
    cout<<flag1;
    cout<<flag2;
    delete [] p;
}
