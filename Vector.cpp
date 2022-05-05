#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // initialization
    vector<int> a;
    vector<int> b(5, 10);
    // five integers values with value 10
    vector<int> c(b.begin(), b.end());
    vector<int> d{1, 2, 5, 7, 8, 9, 10};

    // iterate
    cout << c.size() << endl;
    for (int i = 0; i < b.size(); i++)
    {
        cout << c[i] << ",";
    }
    cout << endl;
    for (int i = 0; i < d.size(); i++)
    {
        cout << d[i] << ",";
    }
    cout << endl;
    for (auto it = d.begin(); it != d.end(); it++) // using iterator : -> auto or vector<int>::iterator
    {
        cout << (*it) << " ";
    }
    cout << endl;
    for (auto x : d) // for each loop
    {
        cout << x << " ";
    }
    cout << endl;
    vector<int> v{2, 5, 8}; // Piece of code to use push_back function
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int no;
        cin >> no;
        v.push_back(no);
    }
    for (auto x : v) // for each loop
    {
        cout << x << " ";
    }
    cout << endl;
    cout << v.size() << endl;
    cout << v.capacity() << endl;
    cout << v.max_size() << endl;

    
}