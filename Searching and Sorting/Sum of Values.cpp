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
    ll n, x;
    cin >> n >> x;
    vector<pair<ll, ll>> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i].first;
        a[i].second = i + 1;
    }
    sort(all(a));
    ll i = 0, j = n - 1;
    while (i < j)
    {
        if (a[i].first + a[j].first == x)
        {
            cout << a[i].second << " " << a[j].second << endl;
            return;
        }
        else if (a[i].first + a[j].first < x)
        {
            i++;
        }
        else
        {
            j--;
        }
    }
    cout << "IMPOSSIBLE" << endl;
}

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
