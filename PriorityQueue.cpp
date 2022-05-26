#include<iostream>
#include<queue>
using namespace std;
int main()
{
    cout<<"Enter the Elements :  [ Max Heap Property ] : ";
    priority_queue<int> pq; //Max Heap Property
    for(int i=0;i<5;i++)
    {
        int no;
        cin>>no;
        pq.push(no);
    }
    while(!pq.empty())
    {
        cout<<pq.top()<<" ";
        pq.pop();
    }
    cout<<endl;
    cout<<"Enter the Elements :  [ Min Heap Property ] : ";
    priority_queue<int,vector<int>,greater<int>>  pq1; //Min Heap Property
    for(int i=0;i<5;i++)
    {
        int no;
        cin>>no;
        pq1.push(no);
    }
    while(!pq1.empty())
    {
        cout<<pq1.top()<<" ";
        pq1.pop();
    }
}