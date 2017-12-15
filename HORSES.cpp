#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    int n;
    long long int s[5002];

    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>s[i];
        }
        sort(s,s+n);

        int min_diff=s[1]-s[0];
        for(int i=0;i<n-1;i++)
        {
            if((s[i+1]-s[i])<min_diff)
            {
                min_diff=s[i+1]-s[i];
            }
        }
        cout<<min_diff<<endl;

    }
}
