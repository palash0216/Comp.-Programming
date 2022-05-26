// To compute a^n effectively;
//  approach : extract last bit of the number and if it is 1 then add power of 2 in the answer else d nothing
#include <iostream>
int power_optimised(int a, int n)
{
    int ans = 1; //intialise 2^0=1 for the first bit
    while (n > 0)
    {
        int last_bit = n & 1;//extract the last bit
        if (last_bit==1)
        {
            ans = ans * a; //Multiply the set with a wit the optimised value
        }
        a = a * a;//everytime square up the value;
        n = n >> 1;// update the binary number n;
    }
    return ans;
}
using namespace std;
int main()
{
    int a, n;
    cout << "Enter the number a and n to get a^n : ";
    cin >> a >> n;
    cout<<"a^n = "<<power_optimised(a,n)<<endl;
}

/*
Completed
*/