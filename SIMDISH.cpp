#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef set<int> si;
typedef map<string,int> msi;

#define REP(i,a,b) for(int i=int(a);i<=int(b);i++)
#define endl '\n'
#define fast() ios_base::sync_with_stdio(false);cin.tie(NULL);
string a[4],b[4];
int t,i;
int s;
int j;


int main()
{
    fast()
    cin>>t;
    while(t--)
    {
        s=0;
        REP(i,0,3)
        cin>>a[i];
        REP(i,0,3)
        cin>>b[i];
        REP(i,0,3)
        {
            REP(j,0,3)
            {
                if(a[i]==b[j])
                    s++;
            }
        }
        if(s>=2)
            cout<<"similar"<<endl;
        else
            cout<<"dissimilar"<<endl;

    }

    return 0;
}


