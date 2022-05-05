#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s0;
    string s1("This is string 1");
    string s2 = "This is string 2";
    string s3(s2);
    string s4 = s3;
    char a[] = {'a', 'b', 'c', '\0'};
    string s5;
    // cout<<s0<<endl<<s1<<endl<<s2<<endl<<s3<<endl<<s4<<endl<<s5<<endl;
    if (s0.empty())
        cout << "Empty" << endl;
    else
        cout << "Not Empty" << endl;
    s0.append("I am proud to be an indian");
    s0 += " And i am from Madhya Pradesh";
    cout << endl
         << s0.length();
    cout << s0 << endl;
    s0.clear();
    s0 = "apple";
    string s6 = "mango";
    cout << s1.compare(s0) << endl;
    string s = " I want to have apple juice ";
    int index = s.find("apple");
    cout << index << endl;
    string word = "apple";
    int length = word.length();
    s.erase(index, length + 1);
    for (auto it = s.begin(); it != s.end(); it++)
    {
        cout << (*it) << endl;
    }
    // s.erase(index,s.length());
    cout << endl
         << s;
    for (auto x : s)
        cout << s << " ";

    cout << endl
         << endl;

    // int n;
    // cin >> n;
    // cin.get();
    // string s[100];
    // for (int i = 0; i < n; i++)
    // {
    //     getline(cin, s[i]);
    // }
    // sort(s, s + n);
    // for (int i = 0; i < n; i++)
    // {
    //     cout << s[i] << endl;
    // }
    // works fine in CPP 20
}
