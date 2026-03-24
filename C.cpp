#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;

struct Student
{
    int id;
    char name[20];
    int math;
    int chi;
    int eng;
    int avg;
};
bool cmp(const Student&a,const Student&b)
{
    if(a.avg!=b.avg)
    {
        return a.avg>b.avg;
    }
    else return a.id<b.id;
}
int countmath(Student stu[],int n)
{
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        if(stu[i].math>=90)
        {
            cnt++;
        }
    }
    return cnt;
}
int main()
{
    int n;
    Student stu[20];
    while(cin>>n)
    {
        for(int i=0;i<n;i++)
        {
            cin>>stu[i].id>>stu[i].name>>stu[i].math>>stu[i].chi>>stu[i].eng;
            stu[i].avg=(stu[i].math+stu[i].chi+stu[i].eng+1)/3;
        }
        sort(stu,stu+n,cmp);
        cout<<countmath(stu,n)<<endl;
        for(int i=0;i<n;i++)
        {
            cout<<stu[i].id<<" "<<stu[i].name<<" "<<stu[i].avg<<endl;
        }
    }
    return 0;
}