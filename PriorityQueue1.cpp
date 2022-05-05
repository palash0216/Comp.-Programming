#include<iostream>
#include<queue>
#include<string>
using namespace std;
class person
{
    public:
    int age;
    string name;
    person (){

    }
    person(string n,int a)//parametrized constructor
    {
        name=n;
        age=a;
    }
};
class personcompare
{
    public:
    bool operator()(person A, person B)
    {
        return A.age<B.age;
    }
};
int main()
{
    person p;
    int n;
    cin>>n;
    priority_queue<person,vector<person>,personcompare> pq;
    for(int i=0;i<n;i++)
    {
        string name;
        int age;
        cin>>name>>age;
        person(name,age);
        pq.push(p);
    }
    for(int i=0;i<3;i++)
    {
        p=pq.top();
        cout<<p.name<<" "<<p.age<<" ";
        pq.pop();

    }
    return 0;
}