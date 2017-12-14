#include<bits/stdc++.h>

#define REP(i,a,b) for(int i=int(a);i<=int(b);i++)
#define TRvi(c,it) for(vi::iterator it = (c).begin(); it != (c).end(); it++)
#define TRvii(c, it) for(vii::iterator it = (c).begin(); it != (c).end(); it++)
#define TRmii(c,it) for(mii::iterator it = (c)begin(); it!= (c).end(); it++)
#define endl '\n'
#define fast() ios_base::sync_with_stdio(false);cin.tie(NULL);
#define mod 1000000007
#define inf INT_MAX
#define ninf INT_MIN
#define ff first
#define se second
#define pb push_back

using namespace std;
typedef long long int ll;
typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef set<int> si;
typedef map<int,int> mii;

int main()
{
    fast()
    int i;
    int arr[100000];
    int freq[100001];
    int prefixsum[100001];
    int t;
    cin>>t;
    while(t--)
    {
        int n,s;
        cin>>n;
        REP(i,0,n-1)
        cin>>arr[i];
        prefixsum[0]=0;
        prefixsum[1]=arr[0]%n;
        REP(i,2,n){
        prefixsum[i]=prefixsum[i-1]+arr[i-1];
        prefixsum[i]%=n;
        }
        //REP(i,0,n)
        //cout<<prefixsum[i]<<" ";
        //cout<<endl;
        REP(i,0,n)
        freq[i]=0;
        REP(i,0,n)
        {
            freq[prefixsum[i]]++;
        }
        //REP(i,0,n)
        //cout<<freq[i]<<" ";
        //cout<<endl;
        REP(i,0,n)
        {
            if(freq[i]>1)
            {
                s=i;
                //cout<<s<<endl;
                break;
            }
        }
        int x;
        REP(i,0,n)
        {
            if(prefixsum[i]!=s)
                continue;
            else
                x=i;
                //cout<<x<<endl;
                break;

        }
        int nn;
        if(prefixsum[x+1]==prefixsum[x])
            nn=1;
        else
        {
            int j=x+1;
            nn=0;
            while(prefixsum[j]!=prefixsum[x])
            {
                 nn++;
                 j++;
            }
            nn++;
        }
        cout<<nn<<endl;
        REP(i,x,x+nn-1)
        cout<<i+1<<" ";
        cout<<endl;
    }


    return 0;
}


