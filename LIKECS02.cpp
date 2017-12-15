#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    int n;

    cin>>t;
    long long int val;
    while(t--)
    {
        cin>>n;

        if(n%2==0)
        {
            val=2;
            for(int i=1;i<=n;i++)
            {
                cout<<val<<" ";
                val+=2;
            }
            cout<<endl;
        }
        else
        {
            val=1;
            for(int i=1;i<=n;i++)
            {
                cout<<val<<" ";
                val+=2;

            }
            cout<<endl;
        }
    }
}
