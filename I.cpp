#include<iostream>
using namespace std;
int main()
{
    int n,m;
    while(cin>>n>>m)
    {
        string grid[105];
        for(int i=0;i<n;i++)
        {
                cin>>grid[i];
        }
        int dx[8]={-1,-1,-1,0,0,1,1,1};
        int dy[8]={-1,0,1,-1,1,-1,0,1};
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]=='*')
                {
                    cout<<"*";
                }else
                {
                    int cnt=0;
                    for(int k=0;k<8;k++)
                    {
                        int x=i+dx[k];
                        int y=j+dy[k];
                        if(x>=0&&x<n&&y>=0&&y<m&&grid[x][y]=='*')
                        {
                            cnt++;
                        }
                    }
                    cout<<cnt;
                }
                if(j!=m-1)
                {
                    cout<<" ";
                }
            }
            cout<<endl;
        }

    }
    return 0;
}