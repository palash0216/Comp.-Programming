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
bool isPalindrome(string St)
{
    string temp = St;
    reverse(temp.begin(), temp.end());
    if (St == temp)
    {
        return 1;
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    w(x)
    {
        int n;
        cin >> n;
        int count = 0, i = 0, j = n - 1;
        string arr;
        cin >> arr;
        while (i < j)
        {
            char first = arr[i];
            char last = arr[j];
            if (first != last)
                count++;
            i++;
            j--;
        }
        cout << (count + 1) / 2 << endl;
    }
    return 0;
}