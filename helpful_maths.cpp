#include <iostream>
#include<cctype>
using namespace std;

int string_to_int(char s)
{
    int a=s-'0';
    return a;
}
int main()
{
    string st1;
    cin>>st1;
    /*int x=strlen(st1);
    cout<<x;*/
    int i=0;
    while(st1[i]!='\0')
    {
        i++;
    }
    int arr[i/2+1];
    int c=0;
    for(int j=0;j<i;j=j+2)
    {
        arr[c]=string_to_int(st1[j]);
        c++;
    }
    for(int j=0;j<(i/2);j++)
    {
        for(int k=j+1;k<=i/2;k++)
        {
            if(arr[j]>arr[k])
            {
                int temp;
                temp=arr[j];
                arr[j]=arr[k];
                arr[k]=temp;
            }
        }
    }
    for(int j=0;j<(i/2+1);j++)
    {
        if(j==(i/2))
        {
            cout<<arr[j];
        }
        else
        {
            cout<<arr[j]<<"+";
        }

    }
}
