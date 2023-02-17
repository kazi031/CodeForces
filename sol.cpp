#include<iostream>
#include<cstring>
#include<cstdio>
typedef long long ll;
using namespace std;

int cnt1,cnt2;
int a[100005];
int n;

int main()
{
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
		scanf("%d",&a[i]);
	int flag=0;
	int MAX=0;
	for(int i=1;i<=n;i++)
	{
		if(i!=1&&a[i]!=a[i-1])
			++flag;
		if(flag==2)
		{
			MAX=max(MAX,min(cnt1,cnt2)*2);
			if(a[i-1]==1)
				cnt2=0;
			else
				cnt1=0;
			flag=1;
		}
		if(a[i]==1)
			++cnt1;
		else
			++cnt2;
	}
	MAX=max(MAX,min(cnt1,cnt2)*2);
	printf("%d\n",MAX);
	return 0;
}
