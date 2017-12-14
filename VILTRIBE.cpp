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
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int a=0;
        int b=0;
        int p=0;
        char last='.';
        f(i,0,s.length()-1)
        {
            if(s[i]=='A')
            {
                a++;
                if(last=='A')
                    a+=p;
                last='A';
                p=0;
            }
            if(s[i]=='B')
            {
                b++;
                if(last=='B')
                    b+=p;
                last='B';
                p=0;
            }
            if(s[i]=='.')
            {
                if(last!='.')
                {
                    p++;
                }
            }
        }
        cout<<a<<" "<<b<<endl;
    }


    return 0;
}


