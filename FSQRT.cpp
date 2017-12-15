#include<iostream>
using namespace std;
int main()
{
    int t;
    int n;

    cin>>t;
    while(t--)
    {
        cin>>n;
        int ans=1;

        while(ans*ans<=n)
        {
            ans++;
        }

        cout<<ans-1<<endl;


    }
}
