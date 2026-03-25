#include<iostream>
using namespace std;
int main()
{
    char str[10];
    while(cin>>str)
    {
        int sum=0,jud;
        for(int i=0;i<9;i++)
        {
            sum+=(str[i]-'0')*(i+1);
        }
        jud=sum%11;
        if(jud==10)
        {
            cout<<str[0]<<"-"<<str[1]<<str[2]<<str[3]<<"-"
            <<str[4]<<str[5]<<str[6]<<str[7]<<str[8]
            <<"-X"<<endl;
        }
        else
        {
            cout<<str[0]<<"-"<<str[1]<<str[2]<<str[3]<<"-"
            <<str[4]<<str[5]<<str[6]<<str[7]<<str[8]
            <<"-"<<jud<<endl;
        }
        cout.flush();
    }
    return 0;
}