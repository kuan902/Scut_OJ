#include<iostream>
#include<string>
using namespace std;

int main()
{
    string key,plain;
    while(cin>>key>>plain)
    {
        int key_len=key.size();
        string chiper;
        for(int i=0;i<plain.size();i++)
        {
            int shift=key[i%key_len]-'A';
            char c=(plain[i]-'A'+shift)%26+'A';
            chiper.push_back(c);
        }
        cout<<chiper<<endl;
    }
    return 0;
}