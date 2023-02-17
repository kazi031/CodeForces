#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    int *p=NULL;
    int num;
    int flag1=0;
    int flag2=0;
    cin>>num;
    p=(int*)malloc(num*sizeof(int));
    for(int i=0;i<num;i++)
    {
        cin>>p[i];
    }
    p=(int*)realloc(p,(num+1)*sizeof(int));
    if(p[num-1]==2)
    {
        p[num]=1;
    }
    else if(p[num-1]==1)
    {
         p[num]=2;
    }
    /*for(int i=1;i<=num+1;i++)
    {
        cout<<p[i]<<" ";
    }*/

    for(int i=0;i<num+1;i++)
    {
        if(p[i]==1)
        {
            int len1=i;
            if(num==i)
                break;
            //cout<<len1<<endl;
            while(p[len1]!=2)
            {
                len1++;
            }
            int len2=len1;
            //cout<<len2<<endl;
            while(p[len2]!=1)
            {
                if(len2==num)
                    break;
                len2++;
            }
            int len_of_2=len2-len1;
            int len_of_1=len1-i;
            //cout<<len_of_1<<" "<<len_of_2<<endl;
            if(len_of_1==len_of_2)
            {
                if(len_of_1+len_of_2>flag1)
                {

                    flag1=len_of_1+len_of_2;
                }
            }
            else if(len_of_1<len_of_2)
            {
                if(len_of_1+len_of_1>flag1)
                {
                    flag1=len_of_1+len_of_1;
                }
            }
            /*else if(len_of_1>len_of_2)
            {
                if(len_of_2+len_of_2>flag1)
                {
                    flag1=len_of_2+len_of_2;
                }
            }*/
        }

        else if(p[i]==2)
        {
            if(i==num)
            {
                break;
            }
            int len1=i;
            //cout<<len1<<endl;
            while(p[len1]!=1)
            {
                len1++;
            }
            int len2=len1;
            //cout<<len2<<endl;
            while(p[len2]!=2)
            {
                if(len2==num)
                    break;
                len2++;
            }
            int len_of_2=len2-len1;
            int len_of_1=len1-i;
            //cout<<len_of_1<<" "<<len_of_2<<endl;
            if(len_of_1==len_of_2)
            {
                if((len_of_1+len_of_2)>flag2)
                {
                    flag2=len_of_1+len_of_2;
                }
            }
            else if(len_of_1<len_of_2)
            {
                if(len_of_1+len_of_1>flag2)
                {
                    flag2=len_of_1+len_of_1;
                }
            }
            /*else if(len_of_1>len_of_2)
            {
                if(len_of_2+len_of_2>flag2)
                {
                    flag2=len_of_2+len_of_2;
                }
            }*/
        }
    }
    //cout<<flag1<<" : "<<flag2;
    if(flag1>flag2)
    {
        cout<<flag1;
    }
    else
    {
        cout<<flag2;
    }
    delete [] p;
}
