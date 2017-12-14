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
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;

        if(k==1)
        {
            cout<<n<<" ";
            f(i,1,n)
               cout<<"a";
            cout<<endl;
        }
        else if(k==2)
        {

                 if(n==1)
                    cout<<"1"<<" a";
                 else if(n==2)
                    cout<<"1"<<" ab";
                 else if(n==3)
                    cout<<"2"<<" aab";
                else if(n==4)
                    cout<<"2"<<" aabb";
                else if(n==5)
                    cout<<"3"<<" aaaba";
                else if(n==6)
                    cout<<"3"<<" aaabab";
                else if(n==7)
                    cout<<"3"<<" aaababb";
                else if(n==8)
                    cout<<"3"<<" aaababbb";
                else if(n==9)
                    cout<<"4"<<" aaaababbb";
                else
                    {
                        cout<<"4"<<" ";
                        string str="abaabb";
                        string final="";
                int m=n/6;
                for(int i=0;i<m;i++)
                {
                    final=final+str;
                }
                int w=n%6;
                for(int i=0;i<w;i++)
                {
                    final+=str[i];
                }
                cout<<final;
                    }


             cout<<endl;

        }
        else
        {
            i=1;
            char s=97;
            char e=97+k;
            char p=s;
            cout<<"1"<<" ";
            while(i<=n)
            {
                 cout<<p;
                 p+=1;
                 if(p==e)
                    p=s;
                i++;
            }
            cout<<endl;
        }
    }



    return 0;
}


