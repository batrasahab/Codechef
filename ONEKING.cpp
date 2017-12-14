#include<bits/stdc++.h>

#define f(i,a,b) for(int i=int(a);i<=int(b);i++)
#define endl '\n'
#define needforspeed() ios_base::sync_with_stdio(false);cin.tie(NULL);
#define sz (100005)
#define ff first
#define se second

using namespace std;
typedef long long int ll;
typedef pair<int,int> ii;

bool comp(ii a,ii b)
{
    if(a.se<b.se)
        return true;
    return false;
}

int main()
{
    needforspeed()
    int i;
    int t;
    ii arr[sz];
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        f(i,0,n-1)
           cin>>arr[i].ff>>arr[i].se;
        sort(arr,arr+n,comp);
        int maxb=arr[0].se;
        int ans=1;
        f(i,1,n-1)
        {
            if(arr[i].ff<=maxb)
                continue;
            else
            {
                ans++;
                maxb=arr[i].se;
            }
        }
        cout<<ans<<endl;
    }


    return 0;
}


