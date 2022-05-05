#include <iostream>
#include <list>
#include <string>
using namespace std;
int main()
{
    list<int> l;
    list<int> l1{1, 5, 8, 9, 10, 55, 47};
    list<string> s1{"apple", "batman"};
    s1.push_back("cabbage");
    for (auto x : s1)
        cout << x << " ";

    cout<<endl;    
    list<string> s2{"zebra", "fish", "joker", "apple", "batman"};
    s2.sort();
    for (auto y : s2)
        cout << y <<" ";

    cout<<endl;    
    s2.reverse();
    for (auto y : s2)
        cout << y <<" ";

    cout<<endl;
    s2.push_front("Kite");
    for (auto y : s2)
        cout << y <<" ";

    cout<<endl;
    //output using iterator for loop
    s2.reverse();
    for(auto it=s2.begin();it!=s2.end();it++)
    {
        cout<<(*it)<<"-->";
    }
    cout<<endl;
    s2.push_back("kite");
    s2.push_back("kite");
    s2.push_back("kite");
    s2.remove("Kite");
    for(auto it=s2.begin();it!=s2.end();it++)
    {
        cout<<(*it)<<"-->";
    }
    
}