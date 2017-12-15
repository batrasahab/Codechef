#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef set<int> si;
typedef map<int,int> mii;

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

int main()
{
    fast()
    int t;
    int i;
    cin>>t;
    cin.get();
    int se=ninf;
    while(t--)
    {
        string s;
        cin>>s;
        REP(i,0,s.length()-1)
        {
            if(s[i]=='1')
            {
                se=i;
                break;

            }
        }
        ll moves=0;
        if(se==ninf)
            cout<<"0"<<endl;
        else
        {
            ll ones=1;
            ll zeroes=0;
            REP(i,se+1,s.length()-1)
            {
                if(s[i]=='0')
                {
                     zeroes++;
                }
                if(s[i]=='0' && i==s.length()-1)
                {
                    moves+=ones+(zeroes*ones);
                }
                if(s[i]=='1')
                {
                    if(zeroes!=0)
                    moves+=ones+(zeroes*ones);
                    ones++;
                    zeroes=0;
                }
            }
            cout<<moves<<endl;
        }



    }

    return 0;
}


