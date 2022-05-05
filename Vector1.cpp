#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> dog{1, 2, 3, 10, 14};
    dog.push_back(16);//add 16 form back
     // O(1) time
    for (auto x : dog)
        cout << x << " ";

    dog.pop_back(); //remove 16
    dog.pop_back(); // remove 14
    dog.pop_back(); //remove 10
    dog.push_back(20);//add 20 from back
    // dog.front(5);
    //expected output :  1 2 3 20
    cout<<endl;
    for (auto x : dog)
        cout << x << " ";
    
    // d.pop_back();//to remove element;
    // d.resize(18);//capacity will change if the size will increasing
    // d.clear();//Remove all the elements, this doesn't delete the memory occupied by the array
    // d.empty(); // make the vector empty
    // d.front();// gives the front element
    // d.back(); // gives the element at the back;
    // d.resume(1000); // to avoid doubling the size of the vector
}