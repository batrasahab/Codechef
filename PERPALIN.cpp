#include<bits/stdc++.h>

#define f(i,a,b) for(int i=int(a);i<=int(b);i++)
#define endl '\n'
#define needforspeed() ios_base::sync_with_stdio(false);cin.tie(NULL);

using namespace std;

int main()
{
    needforspeed()
    int i,j;
    int t;
    char pal[100000];
    cin>>t;
    while(t--)
    {
        int n,p;
        cin>>n>>p;
        if(p==1 || p==2 || n%p!=0)
            cout<<"impossible";
        else
        {
            if(p%2==0)
            {
                int s=0;
                int e=p-1;
                while(s<e)
                {
                    if(e%2!=0)
                    {
                        pal[s]='a';
                        pal[e]='a';
                    }
                    else
                    {
                        pal[s]='b';
                        pal[e]='b';
                    }
                    s++;
                    e--;
                }
            }
            else
            {
                int s=0;
                int e=p-1;
                while(s<e)
                {
                    if(e%2==0)
                    {
                        pal[s]='a';
                        pal[e]='a';
                    }
                    else
                    {
                        pal[s]='b';
                        pal[e]='b';
                    }
                    s++;
                    e--;
                }
                pal[s]='b';
            }
            f(i,1,n/p)
            {
                f(j,1,p)
                {
                    cout<<pal[j-1];
                }
            }

        }
        cout<<endl;
    }


    return 0;
}


