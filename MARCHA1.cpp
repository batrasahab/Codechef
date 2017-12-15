#include<bits/stdc++.h>
using namespace std;
bool result(int n,int notes[],int m)
{
    if(m==0)
    {
        return true;
    }
    for(int i=n-1;i>=0;i--)
    {
        if(notes[i]<=m && notes[i]!=INT_MAX)
        {
            int c=notes[i];
            notes[i]=INT_MAX;
            return result(n,notes,c);
        }
    }
    return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    int n,m;
    int notes[20];

    cin>>t;

    while(t--)
    {
        cin>>n>>m;
        for(int i=0;i<n;i++)
        {
            cin>>notes[i];
        }
        sort(notes,notes+n);
        if(result(n,notes,m))
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}
