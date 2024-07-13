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
    ll n, p;
    cin >> n >> p;

    set<pair<int, int>> ranges;
    ranges.insert({0, n});
    multiset<ll> range_lengths;
    range_lengths.insert(n);

    for (int i = 0; i < p; i++)
    {
        ll pos;
        cin >> pos;
        auto it = ranges.upper_bound({pos, 0});
        it--;

        ll start = it->first;
        ll end = it->second;

        ranges.erase(it);
        range_lengths.erase(range_lengths.find(end - start));
        ranges.insert({start, pos});
        ranges.insert({pos, end});
        range_lengths.insert(pos - start);
        range_lengths.insert(end - pos);

        cout << *range_lengths.rbegin() << " ";
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
