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
        int x1,x2,y1,y2;
        cin>>x1>>y1>>x2>>y2;

        if(x1!=x2 && y1!=y2)
           cout<<"sad"<<endl;

        else
        {
            if(x1==x2)
            {
                if(y1>y2)
                    cout<<"down"<<endl;
                else
                    cout<<"up"<<endl;
            }
            else
            {
                if(x1>x2)
                    cout<<"left"<<endl;
                else
                    cout<<"right"<<endl;
            }
        }

    }


    return 0;
}


