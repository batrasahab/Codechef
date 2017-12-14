#include<bits/stdc++.h>

#define f(i,a,b) for(int i=int(a);i<=int(b);i++)
#define endl '\n'
#define needforspeed() ios_base::sync_with_stdio(false);cin.tie(NULL);

using namespace std;

int main()
{
    needforspeed()
    int i;
    int t;
    int arr[100];
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        f(i,0,n-1)
        cin>>arr[i];
        sort(arr,arr+n);
        cout<<arr[(n+k)/2]<<endl;
    }
    return 0;
}

