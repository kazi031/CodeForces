#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int len,time;
    scanf("%d %d",&len,&time);
    char s1[100];
    scanf("%s",s1);
    bool swapped = true;
    int count = 0;
    while(swapped == true && count<=time-1)
    {
        swapped = false;
        count++;
        for(int i=0;i<len;i++)
        {
            if(s1[i]=='B' && s1[i+1]=='G')
            {
                s1[i+1] = 'B';
                s1[i]  = 'G';
                i++;
                swapped = true;
            }
        }
       // printf("When t is equal to : %d\n",count);
       //  printf("%s\n",s1);
    }
    printf("%s",s1);

}

