#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

typedef map<string,int> msi;

#define REP(i,a,b) for(int i=int(a);i<=int(b);i++)
#define endl '\n'
#define fast() ios_base::sync_with_stdio(false);cin.tie(NULL);

ll a;
string b;
ll bb;
char ch;
int t,i;
int s=0;
ll gcd(ll a,ll b)
{
    if(!a)
        return b;
    return gcd(b%a,a);
}
ll reduceB(string b)
{
    ll mod=0;
    REP(i,0,b.length()-1)
    mod=(mod*10+b[i]-'0')%a;
    return mod;
}
int main()
{
    fast()
    //cin>>t;
    //while(t--)
    //{
        cin>>a;
        cin>>b;
        if(!a)
            cout<<endl;
        else
        {
        bb=reduceB(b);
        cout<<gcd(a,bb)<<endl;
        }

    //}
    return 0;
}


