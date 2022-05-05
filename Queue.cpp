#include<iostream>
#include<queue>
using namespace std;
int main()
{
    queue<int> qt;
    for(int i=0;i<5;i++)
    {
        qt.push(i);
    }
    while(!qt.empty())
    {
        cout<<qt.front()<<" ";
        qt.pop();
    }
}