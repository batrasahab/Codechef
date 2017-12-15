#include<iostream>
using namespace std;
int main()
{
    int t;
    int no[3];
    int max;
    int s_max;

    cin>>t;

    while(t--)
    {
        for(int i=0;i<3;i++)
        {
            cin>>no[i];
        }
        max=no[0];
        for(int i=0;i<3;i++)
        {
            if(no[i]>max)
            {
                max=no[i];
            }
        }

        s_max=0;

        for(int i=0;i<3;i++)
        {
            if(no[i]<max && no[i]>s_max)
            {
                s_max=no[i];
            }
        }
        cout<<s_max<<endl;
    }
}
