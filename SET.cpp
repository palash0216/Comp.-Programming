#include<iostream>
#include<set>
using namespace std;
int main()
{
    int array[]={12,85,2,96,32,50,14};
    int n=(sizeof(array)/sizeof(int));
    set<int>s;
    for(int i=0;i<n;i++)
    {
        s.insert(array[i]);
    }
    for(auto x:s)
    {
        cout<<x<<" ";
    }
    s.erase(14);
    for(auto x:s)
    {
        cout<<x<<" ";
    }
}