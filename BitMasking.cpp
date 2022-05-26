#include <iostream>
using namespace std;
// function to find the ith bit of the number
int findithbit(int N, int i)
{
    int mask = 1 << i;
    int bit = (N & mask) > 0 ? 1 : 0;
    return bit;
}
// function to set a particular bit
int setbit(int N, int i)
{
    // N=10 -: 1010        1010
    //         1111<<2  -- 1100
    //                 (or)1110
    // i=2
    // Ans -:  1110
    int mask = 1 << i;
    N = N | mask;
    return N;
}
// Funtion to clear the ith bit
int clearbit(int N, int i)
{
    // N=10 - 1010
    //
    // i=1
    // exp ans -: 1000
    int mask = ~(1 << i);
    N = N & mask;
    return N;
}
int main()
{
    int N;
    cin >> N;
    /*
    Code to check the number is even or not
    if ((N & 1) == 1)
        cout << "Odd" << endl;
    else
        cout << "Even" << endl;*/
    // cout << findithbit(N, 2); // 11->1010 and i=2 [0,1,2] expected answer -: 0
    // cout << setbit(N, 2); // 10->1010 and i=2 [0,1,2] expected answer -: 14  1110
    cout << clearbit(N, 1); // 10->1010 and i=1 [0,1] expected answer -: 8  1000
}