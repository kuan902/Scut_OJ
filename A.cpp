#include<iostream>

using namespace std;
int main()
{
    int n;
    int arr[11][11];
    while(cin>>n)
    {
        int sum=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>arr[i][j];
            }
        }
            for(int k=0;k<n;k++)
            {
                sum+=arr[k][k];
            }
            for(int m=0;m<n;m++)
            {
                sum+=arr[m][n-1-m];
            }
            if(n%2!=0)
            {
            sum=sum-arr[n/2][n/2];
            }
            cout<<sum<<endl;
        for(int a=0;a<n;a++)
        {
            for(int b=0;b<n;b++)
            {
                cout<<arr[b][a]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}