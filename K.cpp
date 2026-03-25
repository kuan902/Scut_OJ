#include<iostream>
#include<string>
using namespace std;
int main()
{
    int dx[4]={0,1,0,-1};
    int dy[4]={1,0,-1,0};
    string str[205];
    int n,m;
    while(cin>>n>>m)
    {
        int x=0,y=0;
        int dirction=0;
        for(int i=0;i<n;i++)
        {
            cin>>str[i];
        }
        while(true)
        {
            if(str[x][y]=='/')
            {
                if(dirction==0) dirction=3;
                else if(dirction==1) dirction=2;
                else if(dirction==2) dirction=1;
                else if(dirction==3) dirction=0;
            }
            else if(str[x][y]=='\\')
            {
                if(dirction==0) dirction=1;
                else if(dirction==1) dirction=0;
                else if(dirction==2) dirction=3;
                else if(dirction==3) dirction=2;
            }
            int nx=x+dx[dirction];
            int ny=y+dy[dirction];
            if(nx<0||nx>=n||ny<0||ny>=m)
            {
                cout<<"("<<x+1<<","<<y+1<<")"<<endl;
                break;
            }
            x=nx;
            y=ny;
            
        }
    }
    return 0;
}