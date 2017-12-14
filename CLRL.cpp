#include<bits/stdc++.h>

#define f(i,a,b) for(int i=int(a);i<=int(b);i++)
#define endl '\n'
#define needforspeed() ios_base::sync_with_stdio(false);cin.tie(NULL);
#define inf INT_MAX
#define ninf INT_MIN
#define sz int(1000000)

using namespace std;
int arr[sz];

int main()
{
    needforspeed()
    int i;
    int t;
    cin>>t;
    while(t--)
    {
        int n,r;
        cin>>n>>r;
        f(i,0,n-1)
        cin>>arr[i];
        if(n==1 || n==2)
            cout<<"YES"<<endl;
        else
        {
            int s=0;
            int e=ninf;
            f(i,0,n-1)
            {
                if(arr[i]>e)
                    e=arr[i];
            }
            bool flag=0;
            f(i,0,n-2)
            {
                if(arr[i]>e || arr[i]<s)
                {
                    flag=1;
                    break;
                }
                else
                {
                    if(arr[i]>r)
                        e=arr[i];
                    else
                        s=arr[i];
                }
            }
            if(flag==1)
                cout<<"NO"<<endl;
            else
                cout<<"YES"<<endl;

        }

    }
    return 0;
}


