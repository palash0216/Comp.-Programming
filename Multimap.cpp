#include <iostream>
#include <map>
#include <string>
using namespace std;
int main()
{
    multimap<string, int> m;
    // ways to insert into map
    m.insert(make_pair("Sugar", 100));//first way
    m.insert(make_pair("Salt", 100));
    m.insert(make_pair("Brush", 90));
    m.insert(make_pair("Paint", 50));
    m.insert(make_pair("Plier", 50));
    m.insert(make_pair("Fan", 90));
    for(auto p:m)
    {
        cout<<p.first<<" "<<p.second<<endl;
    }
    auto it = m.begin();
    m.erase(it);
    cout<<endl;
    for(auto p:m)
    {
        cout<<p.first<<" "<<p.second<<endl;
    }
    // // Search
    // string fruit;
    // cin >> fruit;
    // // m.erase[fruit]; //This is to erase
    // auto it = m.find(fruit);
    // if (it != m.end())
    // {
    //     cout << "Price of fruit : " << fruit << " is " << m[fruit] << endl;
    // }
    // else
    //     cout << "Fruit is Not present" << endl;

}