#include<bits/stdc++.h>

#define f(i,a,b) for(int i=int(a);i<=int(b);i++)
#define endl '\n'
#define needforspeed() ios_base::sync_with_stdio(false);cin.tie(NULL);
#define mod 1000000007
#define inf INT_MAX
#define ninf INT_MIN
#define ff first
#define se second
#define pb push_back

using namespace std;
typedef long double ld;
typedef long long int ll;
typedef unsigned long long int ull;
typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef set<int> si;
typedef map<int,int> mii;

int main()
{
    needforspeed()
    int i;
    int t;
    cin>>t;
    while(t--)
    {
        ll d;
        cin>>d;
        ll ans=(d%9)+1;
        cout<<ans<<endl;
    }


    return 0;
}

