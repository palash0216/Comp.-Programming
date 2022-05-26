#include <iostream>
#include <string.h>
#include <vector>
using namespace std;
int main()
{
    //     pair<int, string> P1;
    //     P1.first = 172;
    //     P1.second = "Palash";
    //     cout << "Name : " << P1.second << "  and EnrollMent Num : " << P1.first;

    vector<int> V1;
    int no;
    for (int i = 0; i < 6; i++)
    {
        cin >> no;
        V1.push_back(no);
    }
    for (auto X : V1)
        cout << X << " ";

    return 0;
}