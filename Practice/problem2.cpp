//◤----------------
//| Lets ❤ Code   |
//| Palash Mishra  |
//|  JUET,Guna     |
// ----------------◢
#include <bits/stdc++.h>
// using namespace __gnu_pbds;
using namespace std;
#define ff first
#define ss second
#define ll long long
#define pb push_back
#define mp make_pair
#define pii pair<int, int>
#define pis pair<int, string>
#define vi vector<int>
#define mii map<int, int>
#define pqb priority_queue<int>
#define pqs priority_queue<int, vi, greater<int>>
#define setbits(x) __builtin_popcountll(x)
#define zrobits(x) __builtin_ctzll(x)
#define mod 1000000007
#define inf 1e18
#define ps(x, y) fixed << setprecision(y) << x
#define mk(arr, n, type) type *arr = new type[n];
#define w(x)  \
    int x;    \
    cin >> x; \
    while (x--)
// mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
int main()
{
    // 58 13
    // 7
    int n;
    cin >> n;
    int p1[n], p2[n], sol[n], sum1 = 0, sum2 = 0, flag = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> p1[i] >> p2[i];
        sum1 += p1[i];
        sum2 += p2[i];
        sol[i] = sum1 - sum2;
        // if (sum1 >= sum2)
        // {
        //     sol[i] = sum1 - sum2;
        // }
        // else
        // {
        //     sol[i] = sum2 - sum1;

        // }
    }
    sort(sol, sol + n);
    (sol[n - 1] < 0) ? flag = 2 : flag = 1;
    cout << flag << " " << sol[n - 1];
    return 0;
}
/*5
140 82
89 134
90 110
112 106
88 90*/