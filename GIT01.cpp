#include <bits/stdc++.h>
using namespace std;
char mat1[100][100],mat2[100][100];
void build1()
{
	mat1[0][0]='R';
	for(int i=1;i<100;i++)
	{
		if(i%2==0)
			mat1[i][0]='R';
		else
			mat1[i][0]='G';
	}
	for(int i=0;i<100;i++)
	{
		for(int j=1;j<100;j++)
		{
             if(mat1[i][j-1]=='R')
             	mat1[i][j]='G';
             else
             	mat1[i][j]='R';
		}
	}
}
void build2()
{
	mat2[0][0]='G';
	for(int i=1;i<100;i++)
	{
		if(i%2==0)
			mat2[i][0]='G';
		else
			mat2[i][0]='R';
	}
	for(int i=0;i<100;i++)
	{
		for(int j=1;j<100;j++)
		{
             if(mat2[i][j-1]=='G')
             	mat2[i][j]='R';
             else
             	mat2[i][j]='G';
		}
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	build1();
	build2();

	int t;
	cin>>t;
	char input[100][100];
	char temp[100];

	while(t--)
	{
		int n,m;
		cin>>n>>m;

		for(int i=0;i<n;i++)
		{
			cin>>temp;
			for(int j=0;j<m;j++)
				input[i][j]=temp[j];
		}

        int c1=0,c2=0;

        for(int i=0;i<n;i++)
        {
        	for(int j=0;j<m;j++)
        	{
        		if(input[i][j]==mat1[i][j])
        			continue;
        		else
        		{
        			if(mat1[i][j]=='G' && input[i][j]=='R')
        				c1+=5;
        			else
        				c1+=3;
        		}
        	}
        }

        for(int i=0;i<n;i++)
        {
        	for(int j=0;j<m;j++)
        	{
        		if(input[i][j]==mat2[i][j])
        			continue;
        		else
        		{
        			if(mat2[i][j]=='G' && input[i][j]=='R')
        				c2+=5;
        			else
        				c2+=3;
        		}
        	}
        }
        cout<<min(c1,c2)<<endl;

	}


}