#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,n=0;
    int kth;
    int *fp=NULL;
    scanf("%d",&n);
    scanf("%d",&kth);
    fp=realloc(fp,n*sizeof(int));
    for(i=0;i<n;i++)
    {
        scanf("%d",&fp[i]);
    }
    int count=0;
    for(i=0;i<n;i++)
    {
        if(fp[i]>fp[kth])
        {
            count++;
        }
        else if(fp[i]=fp[kth])
        {
            if(fp[kth]==0)
            {
                count=count+0;
            }
            else
            {
                count++;
            }
        }
    }
    if(kth==n)
    {
        count=n;
    }
    printf("%d",count);
    free(fp);
    return 0;
}
