#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    int n;
    int a[101];
    int k;

    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        cin>>k;

        int e=a[k];
        int ans;

        sort(a+1,a+n+1);
        for(int i=1;i<=n;i++)
        {
           if(a[i]==e)
           {
               ans=i;
               break;
           }
        }
        cout<<ans<<endl;

    }

}
