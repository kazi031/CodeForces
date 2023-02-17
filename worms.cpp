#include<iostream>
#include<stdio.h>
using namespace std;
int binarysearch(int * arr,int high,int x);
int main()
{
    /*int arr[5] = {2,9,12,16,25};
    int x = 13;
    int y = binarysearch(arr,x,0,4);
    printf("%d",y);*/
    int * p = NULL;
    int n;
    scanf("%d",&n);
    p = new int[n];
    int total;
    for(int i=0;i<n;i++)
    {
        int temp;
        scanf("%d",&temp);
        if(i==0)
        {
            p[i] = temp;
        }
        else
        {
            p[i] = p[i-1] + temp;
        }
    }
    int num;
    //scanf("%d",&num);
    /*for(int i=0;i<num;i++)
    {
        int temp;
        scanf("%d",&temp);
        int y = binarysearch(p,n,temp);
        printf("%d ",y);
    }*/
    int y = binarysearch(p,n,11);
    printf("%d",y);
    delete [] p;
}
int binarysearch(int * arr,int high,int x)
{
    int mid;
    int low = 0;
    while(low<=high)
    {
        mid = (high+low)/2;
        if(x>arr[mid] && x<arr[mid+1])
        {
            return mid + 1;
        }
        else if(x<arr[mid] && x>arr[mid-1])
        {
            return mid;
        }
        else if(arr[mid]<x)
        {
            low = mid + 1;
        }

        else if(arr[mid]>x)
        {
            high = mid - 1;
        }
        else if(arr[mid]==x)
        {
            return mid;
        }
    }
    return -1;
}
