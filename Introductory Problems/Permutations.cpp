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
    ll n;
    cin >> n;
    if (n < 4)
    {
        if (n == 1)
        {
            cout << "1" << endl;
        }
        else
        {
            cout << "NO SOLUTION" << endl;
        }
        return;
    }
    ll k = 2, i;
    vll v(n);
    for (i = 0; i < n; i++)
    {
        if (k < n)
        {
            v[i] = k;
            k += 2;
        }
        else
        {
            break;
        }
    }
    if (n % 2)
    {
        v[i] = 1;
        v[i + 1] = n;
    }
    else
    {
        v[i] = n;
        v[i + 1] = 1;
    }

    k = 3;
    for (i = n - 1; i >= 0; i--)
    {
        if (k < n)
        {
            v[i] = k;
            k += 2;
        }
        else
        {
            break;
        }
    }
    for (auto d : v)
    {
        cout << d << ' ';
    }
    cout << endl;
}

// 2 4 6 8 10 1 9 7 5 3
// 2 4 6 8 1 9 7 5 3

//_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-
int main()
{
    fastio;
    // online_judge();
    ll _ = 1;
    // cin >> _;
    while (_-- > 0)
        solve();
    return 0;
}