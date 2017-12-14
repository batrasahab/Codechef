#include<bits/stdc++.h>

#define endl '\n'
#define needforspeed() ios_base::sync_with_stdio(false);cin.tie(NULL);
#define f(i,a,b) for(int i=int(a);i<=int(b);i++)
#define ff first
#define se second
#define sz int(100005)
#define inf INT_MAX

using namespace std;
typedef long long int ll;

struct poly
{
    ll a0,a1,a2,a3;
}p[sz],p0[sz],p1[sz],p2[sz],p3[sz];

ll calc(poly p,ll t)
{
    ll ans=(ll(p.a0)+ll(p.a1*t)+ll(p.a2*t*t)+ll(p.a3*t*t*t));
    return ans;
}
bool comp0(poly a,poly b)
{
    if(a.a0<b.a0)
        return true;
    else if(a.a0>b.a0)
        return false;
    else
    {
        if(a.a3<b.a3)
        return true;
        else if(a.a3>b.a3)
        return false;
        else
        {
            if(a.a2<b.a2)
            return true;
            else if (a.a2>b.a2)
            return false;
            else
            {
                if(a.a1<b.a1)
                return true;
                else if(a.a1>b.a1)
                return false;
            }
        }
    }
}
bool comp1(poly a,poly b)
{
    if(a.a1<b.a1)
        return true;
    else if(a.a1>b.a1)
        return false;
    else
    {
        if(a.a3<b.a3)
        return true;
        else if(a.a3>b.a3)
        return false;
        else
        {
            if(a.a2<b.a2)
            return true;
            else if (a.a2>b.a2)
            return false;
            else
            {
                if(a.a0<b.a0)
                return true;
                else if(a.a0>b.a0)
                return false;
            }
        }
    }
}
bool comp2(poly a,poly b)
{
    if(a.a2<b.a2)
        return true;
    else if(a.a2>b.a2)
        return false;
    else
    {
        if(a.a3<b.a3)
        return true;
        else if(a.a3>b.a3)
        return false;
        else
        {
            if(a.a1<b.a1)
            return true;
            else if (a.a1>b.a1)
            return false;
            else
            {
                if(a.a0<b.a0)
                return true;
                else if(a.a0>b.a0)
                return false;
            }
        }
    }
}
bool comp3(poly a,poly b)
{
    if(a.a3<b.a3)
        return true;
    else if(a.a3>b.a3)
        return false;
    else
    {
        if(a.a2<b.a2)
        return true;
        else if(a.a2>b.a2)
        return false;
        else
        {
            if(a.a1<b.a1)
            return true;
            else if (a.a1>b.a1)
            return false;
            else
            {
                if(a.a0<b.a0)
                return true;
                else if(a.a0>b.a0)
                return false;
            }
        }
    }
}
ll ans2[4][100001];
int main()
{
    needforspeed()
    int i,j;
    int t;
    cin>>t;
    while(t--)
    {
         int n;
         cin>>n;
         f(i,0,n-1)
         cin>>p[i].a0>>p[i].a1>>p[i].a2>>p[i].a3;
         f(i,0,n-1)
         {
             p0[i]=p[i];
             p1[i]=p[i];
             p2[i]=p[i];
             p3[i]=p[i];
         }
         sort(p0,p0+n,comp0);
         sort(p1,p1+n,comp1);
         sort(p2,p2+n,comp2);
         sort(p3,p3+n,comp3);
         ll ans[250];
         f(i,0,249)
         ans[i]=100000000000000000001;
         f(i,0,n-1)
         {
             f(j,0,249)
                ans[j]=min(ans[j],calc(p[i],j));
         }
         int sz1=min(n,100);
         int sz2=min(n,400);
         f(i,0,3)
         {
             f(j,0,100000)
                ans2[i][j]=100000000000000000001;
         }

         f(i,0,100000)
         {
             f(j,0,sz1-1)
             ans2[0][i]=min(ans2[0][i],calc(p0[j],i));
         }
         f(i,0,100000)
         {
             f(j,0,sz1-1)
             ans2[1][i]=min(ans2[1][i],calc(p1[j],i));
         }
         f(i,0,100000)
         {
             f(j,0,sz1-1)
             ans2[2][i]=min(ans2[2][i],calc(p2[j],i));
         }
         f(i,0,100000)
         {
             f(j,0,sz2-1)
             ans2[3][i]=min(ans2[3][i],calc(p3[j],i));
         }

         ll q;
         cin>>q;
         while(q--)
         {
             ll t;
             cin>>t;
             if(t<250)
                cout<<ans[t]<<endl;
             else
             {
                 cout<<min(min(min(ans2[0][t],ans2[1][t]),ans2[2][t]),ans2[3][t])<<endl;
             }
         }


    }
    return 0;
}


