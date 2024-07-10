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
    ll n, m;
    cin >> n >> m;
    map<int, int> mp;
    vll b(m);
    for (ll i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        mp[x]++;
    }
    for (ll i = 0; i < m; i++)
        cin >> b[i];

    ll j = 0;
    while (j < m)
    {
        auto it = mp.upper_bound(b[j]);
        if (it == mp.begin())
            cout << -1 << endl;
        else
        {
            it--;
            cout << it->first << endl;
            it->second -= 1;
            if (it->second == 0)
                mp.erase(it);
        }
        j++;
    }
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
