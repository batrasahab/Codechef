#include<bits/stdc++.h>
using namespace std;
int result(int i,int n,int q)
{
    if(i==q)
        return n/2;
    if(n%2==0)
        return n/2;
    return (n+1)/2;

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    int g,i,n,q;

    cin>>t;
    while(t--)
    {
        cin>>g;
        while(g--){
        cin>>i>>n>>q;

        cout<<result(i,n,q)<<endl;
        }
    }
}
