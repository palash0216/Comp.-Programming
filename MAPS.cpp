#include <iostream>
#include <map>
#include <string>
using namespace std;
int main()
{
    map<string, int> m;
    // ways to insert into map
    m.insert(make_pair("Mango", 100));//first way
    m.insert(make_pair("Lichi", 140));
    m.insert(make_pair("Guava", 90));
    m.insert(make_pair("Orange", 200));
    pair<string, int> p;//second way
    p.first = "Apple";
    p.second = 50;
    m["Banana"] = 120;//third way
    // Search
    string fruit;
    cin >> fruit;
    // m.erase[fruit]; //This is to erase
    auto it = m.find(fruit);
    if (it != m.end())
    {
        cout << "Price of fruit : " << fruit << " is " << m[fruit] << endl;
    }
    else
        cout << "Fruit is Not present" << endl;
    for(auto it=m.begin();it!=m.end();it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }
}