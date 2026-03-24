#include<iostream>
using namespace std;
int main()
{
    int m,k,x;
    int arr[16],brr[16];
    while(cin>>m)
    {
        for(int i=0;i<m;i++)
        {
            cin>>arr[i];
        }
        cin>>k>>x;
        for(int j=0;j<m;j++)
        {
            brr[j]=arr[(j-k+m)%m];
        }
        for(int i=0;i<m;i++)
        {
            if(i>0)
            {
                cout<<" ";
            }
            cout<<brr[i];
        }
        cout<<endl;
       bool found = false;
        for(int i=0; i<m; i++)
        {
            if(brr[i] == x)
            {
                if(found) cout << " ";
                cout << i;
                found = true;
            }
        }
        if(!found)
        {
            cout << "Not found";
        }
        cout << endl;
    }
    return 0;
}