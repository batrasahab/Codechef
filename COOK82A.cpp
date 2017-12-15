#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef pair<string,int> si;

#define REP(i,a,b) for(int i=int(a);i<=int(b);i++)
#define endl '\n'
#define fast() ios_base::sync_with_stdio(false);cin.tie(NULL);
int t,i;
string teamname;
int goal[4];
int s;
int main()
{
    fast()
    cin>>t;
    cin.get();
    while(t--)
    {
        REP(i,0,3)
        {
             cin>>teamname>>s;
             if(teamname[0]=='R')
                goal[0]=s;
             else if(teamname[0]=='M')
                goal[1]=s;
             else if(teamname[0]=='E')
                goal[2]=s;
             else
                goal[3]=s;

        }
             if(goal[3]>goal[2] && goal[1]>goal[0])
                cout<<"Barcelona"<<endl;
             else
                cout<<"RealMadrid"<<endl;
    }
    return 0;
}


