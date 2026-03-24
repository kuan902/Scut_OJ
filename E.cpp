#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;
bool isPrime(int num)
{
    if(num<2) return false;
    for(int i=2;i<=sqrt(num);i++)
    {
        if(num%i==0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int m;
    while(cin>>m)
    {
        int arr[1000];
        for(int i=0;i<m;i++)
        {
            cin>>arr[i];
        }
        int primes[1000];
        int cnt=0;
        for(int i=0;i<m;i++)
        {
            if(isPrime(arr[i]))
            {
                primes[cnt++]=arr[i];
            }
        }
        for(int i=0;i<cnt;i++)
        {
            if(i>0) cout<<" ";
            cout<<primes[i];
        }
        cout<<endl;
        int sum=0;
        for(int i=0;i<cnt;i++)
        {
            sum+=primes[i];
        }
        double avg=0.0;
        if(cnt>0) 
        {
            avg = static_cast<double>(sum) / cnt;
            avg = (int)(avg * 10 + 0.5) / 10.0; 
        }
        cout<<"和："<<sum<<"，平均值："<<fixed<<setprecision(1)<<avg<<endl;

        bool inc=true;
        for(int i=1;i<cnt;i++)
        {
            if(primes[i]<=primes[i-1])
            {
                inc=false;
                break;
            }
        }
        cout<<"Is increasing: "<<(inc?"Yes":"No")<<endl;
    }
    return 0;
}