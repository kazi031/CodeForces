#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n=0,i,j,k,x,largest_element,count=0;
    int * fp=NULL;
    scanf("%d",&n);
    scanf("%d",&k);
    fp=realloc(fp,n*sizeof(int));
    for(i=0;i<n;i++)
    {
        scanf("%d",&fp[i]);
    }
    if(fp[0]>k)
    {
        for(i=0;i<n;i++)
        {
            if(fp[i]>k)
            {
                count++;
            }
            else if(fp[i]<=k)
                count=count+0;
        }

    }
    /*else if(fp[0]>k)
    {
        count=n;
    }*/
    else if((fp[0]<k) && (fp[0]!=0))
    {
        for(i=0;i<n;i++)
        {
            largest_element=i;
            for(j=i+1;j<n;j++)
            {
                if(fp[j]<fp[i])
                {
                    swap(&fp[i],&fp[j]);
                }
            }
        }
        //printf("%d\n",fp[largest_element]);
        for(i=0;i<n;i++)
        {
            if (fp[i]==fp[largest_element])
            {
                count++;
            }
        }
        //printf("%d ",count);
    }
    else if(fp[0]==k)
    {
        count=n;
    }
    printf("%d",count);
    free(fp);
    return 0;
}
int swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
