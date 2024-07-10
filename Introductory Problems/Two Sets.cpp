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
    vll a, b;
    if (n % 2)
    {
        if (n == 1 || (n - 3) % 4)
            cout << "NO" << endl;
        else
        {
            for (int i = 0; i < n; i += 4)
            {
                a.push_back(i);
                b.push_back(i + 1);
                b.push_back(i + 2);
                a.push_back(i + 3);
            }
            cout << "YES" << endl;
            cout << b.size() << endl;
            for (auto i : b)
                cout << i << ' ';
            cout << endl;
            cout << a.size() - 1 << endl;
            for (auto i : a)
                if (i != 0)
                    cout << i << ' ';
            cout << endl;
        }
    }
    else
    {
        if (n == 2 || (n - 4) % 4)
            cout << "NO" << endl;
        else
        {
            for (int i = 1; i < n; i += 4)
            {
                a.push_back(i);
                b.push_back(i + 1);
                b.push_back(i + 2);
                a.push_back(i + 3);
            }
            cout << "YES" << endl;
            cout << a.size() << endl;
            for (auto i : a)
                cout << i << ' ';
            cout << endl;
            cout << b.size() << endl;
            for (auto i : b)
                cout << i << ' ';
            cout << endl;
        }
    }
}

/*
15
1 2 4 7 8 11 12 15
3 5 6 9 10 13 14

11
1 2 4 6 8 11
3 5 7 9 10

7
1 2 5 8
3 4 6 7

1 2 4 7
3 5 6

1 4 5 8
2 3 6 7

for odd
(n-3)%4

for even
(n-4)%4

|  |
_ _

8 11 12 15 = 44
9 10 13 14 = 47
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
