#include <bits/stdc++.h>
// Keywords
#define ll long long int
#define ull unsigned long long int
#define vi vector<int>
#define vll vector<ll>
#define vip vector<pair<int, int>>
#define all(x) (x).begin(), (x).end()
#define PI 3.1415926535897932384626433832
#define um unordered_map
#define dbg(x) cout << #x << " = " << x << endl
#define endl "\n"
// Fast I/O
#define fastio   \
    cin.tie(0);  \
    cout.tie(0); \
    ios_base::sync_with_stdio(false);
using namespace std;
// Incase I/O is from file to file
void online_judge()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
//_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-

// Write solution here
void solve()
{
    ll x, y;
    cin >> x >> y;
    if (y >= x)
    {
        if (y % 2 == 0)
        {
            cout << (y - 1) * (y - 1) + x << endl;
        }
        else
        {
            cout << (y - 1) * (y - 1) + y + (y - x) << endl;
        }
    }
    else
    {
        if (x % 2 == 0)
        {
            cout << (x - 1) * (x - 1) + x + (x - y) << endl;
        }
        else
        {
            cout << (x - 1) * (x - 1) + y << endl;
        }
    }
}

//_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-
int main()
{
    fastio;
    // online_judge();
    ll _ = 1;
    cin >> _;
    while (_-- > 0)
        solve();
    return 0;
}