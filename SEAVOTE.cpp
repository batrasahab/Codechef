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
typedef signed long long int sll;
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
    int arr[10000];
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        f(i,0,n-1)
        cin>>arr[i];
        int s=0;
        int cnt=0;
        bool x=false;
        f(i,0,n-1)
        {
            if(arr[i]==0)
                cnt++;
            else
                s+=arr[i];
            if(arr[i]>100)
                x=true;
        }
        if(x)
            cout<<"NO"<<endl;
        else
        {
            if(s<100 || s>100+n-cnt-1)
                cout<<"NO"<<endl;
            else
                cout<<"YES"<<endl;
        }

    }


    return 0;
}


