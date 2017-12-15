#include<bits/stdc++.h>

#define f(i,a,b) for(int i=int(a);i<=int(b);i++)
#define endl '\n'
#define needforspeed() ios_base::sync_with_stdio(false);cin.tie(NULL);
#define ninf INT_MIN

using namespace std;
typedef signed long long int sll;
typedef unsigned long long int ull;

int main()
{
    ull arr[100001];
    needforspeed()
    int i,j;
    int t;
    cin>>t;
    while(t--)
    {
        int n,q;
        int q_no,x,y;
        cin>>n>>q;
        f(i,1,n)
           cin>>arr[i];
        f(i,0,q-1)
        {
            cin>>q_no>>x>>y;
            if(q_no==1)
            {
                 sll max=ninf;
                 int m;
                 f(m,x,y)
                 {
                     sll temp=(arr[m]-arr[x])*(arr[y]-arr[m]);
                     if(temp>max)
                        max=temp;
                 }
                 cout<<max<<endl;
            }
            else
            {
                arr[x]=y;
            }
        }
    }



    return 0;
}


