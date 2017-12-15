#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef set<int> si;
typedef map<string,int> msi;

#define REP(i,a,b) for(int i=int(a);i<=int(b);i++)
#define TRvi(c,it) for(vi::iterator it = (c).begin(); it != (c).end(); it++)
#define TRvii(c, it) for(vii::iterator it = (c).begin(); it != (c).end(); it++)
#define TRmsi(c, it) for(msi::iterator it = (c).begin(); it != (c).end(); it++)
#define endl '\n'
#define fast() ios_base::sync_with_stdio(false);cin.tie(NULL);
int t,n,arr[100000];
int i=0;
int find_max()
{
    int max=INT_MIN;
    REP(i,0,n-1)
    {
        if(arr[i]>max)
            max=arr[i];
    }
    return max;
}

int main()
{
    fast()
    cin>>t;
    while(t--)
    {
        cin>>n;
        REP(i,0,n-1)
        cin>>arr[i];

        cout<<n-find_max()<<endl;

    }
    return 0;
}

