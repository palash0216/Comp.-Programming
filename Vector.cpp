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

    vector<int> dog{1, 2, 3, 10, 14};
    dog.push_back(16); // O(1) time
    for (auto x : dog)
        cout << x << " ";

    dog.pop_back();
    dog.pop_back();
    dog.pop_back();
    for (auto x : dog)
        cout << x << " ";

    // d.pop_back();//to remove element;
    // d.resize(18);//capacity will change if the size will increasing
    // d.clear();//Remove all the elements, this doesn't delete the memory occupied by the array
    // d.empty(); // make the vector empty
    // d.frongt();// gives the front element
    // d.back(); // gives the element at the back;
    // d.resume(1000); // to avoid doubling the size of the vector
}