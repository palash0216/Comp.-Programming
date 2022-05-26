#include <iostream>
#include <string.h>
using namespace std;
//basic approach of this program is just ectract the last bit and for that set bit print the respective postion character of the string.
void filter(int N, char a[])
{
    int j = 0;
    while (N > 0)
    {
        int last_bit = N & 1;
        if (last_bit)
        {
            cout << a[j];
        }
        j++;
        N = N >> 1;
    }
    cout << endl;
}
void printSubset(char a[])
{
    int n = strlen(a);
    cout << "length of the string : " << n << endl;
    for (int i = 0; i < (1 << n); i++)
    {
        filter(i, a);
    }
}
int main()
{
    char st[] = "abc";
    printSubset(st);
}