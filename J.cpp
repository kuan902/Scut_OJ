#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    while(cin>>str)
    {
        for(int i=0;i<str.size();i++)
        {
            if(str[i]>='A'&&str[i]<='Z')
            {
                if(i!=0)
                {
                    cout<<"_";
                }
                cout<<(char)(str[i]+32);
            }
            else 
            {
                cout<<str[i];
            }
        }
        cout<<endl;
    }
    return 0;
}