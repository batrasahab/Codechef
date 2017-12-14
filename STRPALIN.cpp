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
    cin>>t;
    while(t--)
    {
        string a,b;
        cin>>a>>b;

        bool fa[26]={false};
        bool fb[26]={false};
        f(i,0,a.length()-1)
        fa[a[i]-'a']=true;
        f(i,0,b.length()-1)
        fb[b[i]-'a']=true;
        bool f[26]={false};
        f(i,0,25)
        {
            if(fa[i]==true && fb[i]==true)
                f[i]=true;
        }
        int cnt=0;
        f(i,0,25)
        {
            if(f[i]==true)
                cnt++;
        }
        if(cnt==0)
            cout<<"No"<<endl;
        else
            cout<<"Yes"<<endl;
    }


    return 0;
}


