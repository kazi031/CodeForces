#include<stdio.h>
int main()
{
    int in=0;
    int out=0;
    int total=0;
    int stop,temp;
    scanf("%d",&stop);
    int i;
    for(i=0;i<stop;i++)
    {
        scanf("%d",&out);
        scanf("%d",&in);
        total=total+in-out;
        if(i==0)
        {
            temp=total;
        }
        else
        {
            if(total>temp)
            {
                temp=total;
            }
        }
    }
    printf("%d",temp);
}
