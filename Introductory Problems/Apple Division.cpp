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
ll sum(ll i, vll a, ll s1, ll s2)
{
    if (i == a.size())
        return abs(s1 - s2);

    return min(abs(sum(i + 1, a, s1 + a[i], s2)), abs(sum(i + 1, a, s1, s2 + a[i])));
}
// Write solution here
void solve()
{
    ll n, ans;
    cin >> n;
    vll a(n);
    for (ll i = 0; i < n; i++)
        cin >> a[i];
    ans = sum(0, a, 0, 0);
    cout << ans << endl;
}

/*
ans +=3
ans +=2 || ans -=2

s1 = 3 + 2
s2 = 0 + 2

*/

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