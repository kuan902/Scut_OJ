#include<iostream>
#include<string>
#include<cctype>
using namespace std;
void replaceChar(string &str,char a,char b)
{
    for(char &c:str)
    {
        if(c==a)
        {
            c=b;
        }
    }
}
char getfreq(const string &str,int freq[])
{
    for(int i=0;i<26;i++)
    {
        freq[i]=0;
    }
    for(char c:str)
    {
        if(islower(c))
        {
            freq[c-'a']++;
        }
    }
    char maxChar='a';
    int maxCount=freq[0];
    for(int i=0;i<26;i++)
    {
        if(freq[i]>maxCount)
        {
            maxCount=freq[i];
            maxChar='a'+i;
        }
    }
    return maxChar;
}
int main()
{
    string str;
    while(cin>>str)
    {
        char a,b;
        cin>>a>>b;
        replaceChar(str,a,b);
        cout<<str<<endl;
        int freq[26];
        char maxChar=getfreq(str,freq);
        cout<<maxChar<<" "<<freq[maxChar-'a']<<endl;
    }
    return 0;
}