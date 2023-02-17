#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int * p = NULL;
    int n;
    int len = 0;
    int len_next = 0;
    int len_prev = 0;
    int total=0;
    scanf("%d",&n);
    p = new int[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&p[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(p[i]==1)
        {
            int len1=i;
            //printf("len1->%d\n",len1);
            while(p[len1]!=2)
            {
                if(len1==n)
                {
                    break;
                }
                len1++;
            }
            //if(len<len1-i)
            len=len1-i;
            //printf("len->%d\n",len);
            if(i!=0)
            {
                int len2 = i-1;
                while(p[len2]!=1)
                {
                    if(len2==0)
                    {
                        break;
                    }
                    len2--;
                }
                //if(i-len2>len_prev)
                len_prev = i-len2;
            }
            if(i!=n-1)
            {
                int len3 = len1;
                while(p[len3]!=1)
                {
                    if(len3==n)
                        break;
                    len3++;
                }
                //if(len3-len1>len_next)
                len_next = len3-len1;
            }
            if(len_next>len_prev)
            {
                if(len>len_next)
                {
                    if(2*len_next>total)
                        total=2*len_next;
                }
                else
                {
                    if(2*len>total)
                        total=2*len;
                }
            }
            else
            {
                if(len>len_prev)
                {
                    if(2*len_prev>total)
                        total=2*len_prev;
                }
                else
                {
                    if(2*len>total)
                        total=2*len;
                }
            }
        }
    }
    //printf("len->%d,len_prev->%d,len_next->%d",len,len_prev,len_next);
    printf("%d",total);
    delete [] p;

}
