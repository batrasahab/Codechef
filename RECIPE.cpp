#include<iostream>
using namespace std;
int gcd(int a, int b)
{
   if(a==0 || b==0)
    return 0;
   else if(a==1 || b==1)
    return 1;
   else if(a==b)
    return a;
   else if(a>b)
    return gcd(a-b,b);
   else
    return gcd(a,b-a);
}
int main()
{
    int t;
    int n;
    int a[50];
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int res=a[0];
        for(int i=1;i<n;i++)
        {
            res=gcd(res,a[i]);
        }
        for(int i=0;i<n;i++)
        {
            cout<<a[i]/res<<" ";
        }
        cout<<endl;
    }

}
