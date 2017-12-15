#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    string s;

    cin>>t;
    cin.get();

    while(t--)
    {
        cin>>s;
        int f[26]={0};
        bool ans=0;

        for(int i=0;i<s.length();i++)
        {
            f[s[i]-97]++;
            if(f[s[i]-97]>1)
            {
                cout<<"yes"<<endl;
                ans=1;
                break;
            }
        }
        if(ans==0)
            cout<<"no"<<endl;
    }
}
