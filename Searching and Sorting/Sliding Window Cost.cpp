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
    vector<ll> v(n), c(n - k + 1);
    for (ll i = 0; i < n; i++)
        cin >> v[i];
    vector<ll> b(v.begin(), v.begin() + k);
    sort(b.begin(), b.end());
    multiset<ll> minSet;
    multiset<ll, greater<ll>> maxSet;
    ll mxs = 0, mns = 0;
    for (ll i = 0; i < k; i++)
    {
        if (i <= k / 2)
        {
            minSet.insert(b[i]);
            mns += b[i];
        }
        else
        {
            maxSet.insert(b[i]);
            mxs += b[i];
        }
    }
    ll preMed;
    if (k & 1)
        preMed = b[k / 2];
    else
        preMed = b[k / 2 - 1];

    ll minCost = (*minSet.rbegin() * minSet.size()) - mns;
    ll maxCost = mxs - (*minSet.rbegin() * maxSet.size());
    cout << minCost + maxCost << " ";

    for (ll i = k; i < n; i++)
    {
        ll prev = v[i - k], mnLast = *minSet.rbegin(), mxFirst = *maxSet.rbegin(), cur = v[i];
        if (prev <= mnLast)
        {
            minSet.erase(minSet.find(prev));
            mns -= prev;
        }
        else
        {
            maxSet.erase(maxSet.find(prev));
            mxs -= prev;
        }
        if (cur <= mnLast)
        {
            minSet.insert(cur);
            mns += cur;
        }
        else
        {
            maxSet.insert(cur);
            mxs += cur;
        }
        if (maxSet.size() > minSet.size())
        {
            ll tm = *maxSet.rbegin();
            maxSet.erase(maxSet.find(tm));
            mxs -= tm;
            minSet.insert(tm);
            mns += tm;
        }
        else if ((int)(minSet.size() - maxSet.size()) > 1)
        {
            ll tm = *minSet.rbegin();
            minSet.erase(minSet.find(tm));
            mns -= tm;
            maxSet.insert(tm);
            mxs += tm;
        }
        // cout << mxs << "-" << mns << " " << (*minSet.rbegin() * minSet.size()) << '-' << ;
        minCost = (*minSet.rbegin() * minSet.size()) - mns;
        maxCost = mxs - (*minSet.rbegin() * maxSet.size());
        cout << minCost + maxCost << " ";
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
