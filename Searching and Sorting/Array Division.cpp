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

bool helper(vll v, ll mid, ll k)
{
    ll curSum = 0, cnt = 1;
    for (auto it : v)
    {
        if (curSum + it > mid)
        {
            curSum = 0;
            cnt++;
        }
        curSum += it;
        if (k < cnt)
            return false;
    }
    return curSum <= mid;
}
// Write solution here
void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> v(n);
    ll mn = INT_MAX, mx = INT_MIN;
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
        mn = min(mn, v[i]);
        mx = max(mx, v[i]);
    }
    ll low = mx, high = n * mx;

    while (low <= high)
    {
        ll mid = (high - low) / 2 + low;
        bool ans = helper(v, mid, k);

        if (ans)
            high = mid - 1;
        else
            low = mid + 1;
    }
    cout << low;
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
