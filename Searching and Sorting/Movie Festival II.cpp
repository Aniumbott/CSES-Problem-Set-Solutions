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
    ll n, k;
    cin >> n >> k;
    vector<pair<ll, ll>> p(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> p[i].first;
        cin >> p[i].second;
    }

    sort(all(p), [](auto a, auto b)
         { return a.first < b.first; });

    ll pr = 0, ans = 0;
    multiset<ll> s;

    for (ll i = 0; i < k; i++)
        s.insert(p[i].second);

    for (ll i = k; i < n; i++)
    {
        if (p[i].first >= *s.begin())
        {
            s.erase(s.begin());
            s.insert(p[i].second);
            ans++;
        }
        else if (p[i].second < *s.rbegin())
        {
            s.erase(s.find(*s.rbegin()));
            s.insert(p[i].second);
        }
    }
    cout << ans + s.size() << endl;
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
