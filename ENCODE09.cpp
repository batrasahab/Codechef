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

bool isPalindrome(string a)
{
    int i=0;
    int j=a.length()-1;
    while(i<=j)
    {
        if(a[i]!=a[j])
            return false;
        i++;
        j--;
    }
    return true;
}
int StringToInt(string n)
{
    int no=0;
    int i;
    REP(i,0,n.length()-1)
    {
        no=no*10+n[i]-42;
    }
    return no;
}



int main()
{
    fast()
    int n=0;
    int c=0;
    cin>>n;
    cin.get();
    while(n!=0){
    while(no--)
    {
        string a;
        cin>>a;
        if(isPalindrome(a))
            c++;
    }
    cout<<c<<endl;
    cin>>n;


    return 0;
}


