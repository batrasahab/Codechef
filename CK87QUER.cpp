#include<bits/stdc++.h>

#define f(i,a,b) for(int i=int(a);i<=int(b);i++)
#define endl '\n'
#define needforspeed() ios_base::sync_with_stdio(false);cin.tie(NULL);

using namespace std;
typedef long long int ll;
int main()
{
    needforspeed()
    int i;
    int t;
    cin>>t;
    while(t--)
    {
        ll y;
        cin>>y;
        int c=0;
        f(i,1,700)
        {
            ll a=y-i;
            if(a<=0)
                continue;
            else
                c+=sqrt(a);
        }
        cout<<c<<endl;
    }

    return 0;
}


