#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef map<int,int> mii;
ll mod=1000000007;

#define REP(i,a,b) for(int i=int(a);i<=int(b);i++)
#define TRmii(c, it) for(mii::iterator it = (c).begin(); it != (c).end(); it++)
#define endl '\n'
#define fast() ios_base::sync_with_stdio(false);cin.tie(NULL);
int n,arr[5000],i;
mii m;
ll elementtoadd=1;
bool flag=0;
void prime_factor(int n)
{
    while(n%2==0)
    {
        m[2]++;
        n=n/2;
    }
    for(int i=3;i<=sqrt(n);i=i+2)
    {
        while(n%i==0)
        {
            m[i]++;
            n=n/i;
        }
    }
    if(n>2)
    {
        m[n]++;
    }
}
int main()
{
    fast()
    cin>>n;
    REP(i,0,n-1)
    cin>>arr[i];
    REP(i,0,n-1)
    prime_factor(arr[i]);
    TRmii(m,it)
    {
        if(((it->second)%(n)!=0))
            flag=1;

        if(((it->second)%(n+1)!=0))
        {
            for(int i=0;i<((n+1)-((it->second)%(n+1)));i++)
            {
                elementtoadd=(elementtoadd*(it->first))%(mod);
            }
        }
    }
    if(flag==0)
    {
        cout<<"justdoit"<<endl;
    }
    else
    {
        cout<<elementtoadd<<endl;
    }


    return 0;
}


