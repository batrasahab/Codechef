#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int n;
    int a[100000];
    cin>>t;

    while(t--)
    {
        cin>>n;

        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }

        sort(a,a+n);
        cout<<a[0]+a[1]<<endl;
    }
}
