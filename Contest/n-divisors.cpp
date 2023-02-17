#include<iostream>
#include<cmath>
using namespace std;
//int arr[1100002];
int arr[50];
int main()
{
    int N=50;
    double sqrtN=sqrt(N);
    int sq=(int)sqrtN;
    for(int i=4;i<=N;i+=2)
    {
        arr[i]=1;
    }
    for(int i=3;i<=sq;i+=2)
    {
        if(arr[i]==0)
        {
            for(int j=i*i;j<=N;j+=i)
            {
                arr[j]=1;
            }
        }
    }
    arr[0]=1;
    arr[1]=1;
    int c=0;
    int n,m;
    cin>>n>>m;
    for(int i=0;i<N;i++)
    {
        if(arr[n]==0)
        {
            n=n+1;
            while(arr[n]!=0)
            {
                n++;
            }
            if(n==m)
            {
                cout<<"YES";
                break;
            }
            else
            {
                cout<<"NO";
                break;
            }

            /*c++;
            cout<<n<<" ";
            break;*/
        }

    }
    //cout<<c;

}
