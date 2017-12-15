#include<iostream>
using namespace std;
int main()
{
    int t;
    int notes[]={1,2,5,10,50,100};
    int n=sizeof(notes)/sizeof(int);

    cin>>t;
    int a;

    while(t--)
    {
        cin>>a;
        int c=0;

        while(a>0)
        {
            for(int i=n-1;i>=0;i--)
            {
                if(notes[i]<=a)
                {
                    a-=notes[i];
                    c++;
                    break;
                }
            }
        }

        cout<<c<<endl;

    }
}
