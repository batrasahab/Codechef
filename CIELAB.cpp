#include<bits/stdc++.h>
using namespace std;
int menu(int p)
{    int r,countt=0;
    while(p>0)
    {
        if(p>2048)
        {
            p=p-2048;
            countt++;
        }
        for(int i=1;i<=12;i++)
        {
            r=pow(2,i-1);

            if(r==p)
            {
                countt++;
                p=0;
                break;
            }
            if(r>p)
            {
                p=p-pow(2,i-2);
                countt++;
                break;
            }
        }
    }
    return countt;
}
int main()
{
    int t,p;
    cin>>t;
    while(t>0)
    {
        cin>>p;
        cout<<menu(p)<<endl;
        t--;
    }
}
