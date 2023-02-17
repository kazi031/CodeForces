#include<iostream>
#include<stdio.h>
#include<math.h>
#include<vector>
using namespace std;
bool status[1100002];
void siv()
{
	int N=1000000;
	int sq=sqrt(N);
	for(int i=4;i<=N;i+=2) status[i]=1;
	for(int i=3;i<=sq;i+=2){
		if(status[i]==0)
		{
			for(int j=i*i;j<=N;j+=i) status[j]=1;
		}
	}
	status[1]=1;
}
int main()
{
    long long int x;
    long long int y;
    int num;
    scanf("%d",&num);
    siv();
    vector <int> result(num,0);
    for(int i=0;i<num;i++)
    {
        scanf("%lld",&x);
        y = sqrt(x);
        if(y*y==x && x!=1 && status[y]==0)
        {
            result[i] = 1;
        }
    }
    for(int i=0;i<result.size();i++)
    {
        if(result[i]==0)
        {
            printf("NO\n");
        }
        else
        {
            printf("YES\n");
        }
    }
}
