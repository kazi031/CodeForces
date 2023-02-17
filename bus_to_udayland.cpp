#include<iostream>
#include<stdio.h>
#include<stdio.h>
#include<vector>
using namespace std;
int main()
{
    vector<char> *adj;
    int row;
    scanf("%d",&row);
    adj = new vector <char> [row];
    for(int i=0;i<row;i++)
    {
        getchar();
        for(int j=0;j<5;j++)
        {
            char temp;
            scanf("%c",&temp);
            adj[i].push_back(temp);
        }
    }
    bool swapped = false;
    for(int i=0;i<row;i++)
    {
        if(swapped == true)
        {
            break;
        }
        for(int j=0;j<1;j++)
        {
            if(adj[i][0]=='O' && adj[i][1]=='O')
            {
                swapped = true;
                adj[i][0]='+';
                adj[i][1]='+';
                break;
            }
            else if(adj[i][3]=='O' && adj[i][4]=='O')
            {
                swapped = true;
                adj[i][3]='+';
                adj[i][4]='+';
                break;
            }

        }
    }
    if(swapped == true)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO");
        return 0;
    }
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<adj[i].size();j++)
        {
            printf("%c",adj[i][j]);
        }
        printf("\n");
    }
    delete [] adj;
    return 0;
}
