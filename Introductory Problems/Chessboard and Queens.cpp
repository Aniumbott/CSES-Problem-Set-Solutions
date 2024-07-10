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
void helper(vector<string> &board, int row,
            vector<bool> &occupiedCol,
            vector<bool> &occupiedPrimary,
            vector<bool> &occupiedSecondary, ll &ans)
{
    if (row == 8)
    {
        ans += 1;
        return;
    }
    for (int col = 0; col < 8; col++)
    {
        if (board[row][col] == '*' || occupiedCol[col] || occupiedPrimary[row - col + 8] || occupiedSecondary[row + col])
        {
            continue;
        }
        occupiedCol[col] = occupiedPrimary[row - col + 8] = occupiedSecondary[row + col] = true;
        helper(board, row + 1, occupiedCol, occupiedPrimary,
               occupiedSecondary, ans);
        occupiedCol[col] = occupiedPrimary[row - col + 8] = occupiedSecondary[row + col] = false;
    }
}
// Write solution here
void solve()
{
    vector<string> board(8);
    for (ll i = 0; i < 8; i++)
    {
        cin >> board[i];
    }
    vector<bool>
        occupiedCol(10, false),
        occupiedPrimary(20, false),
        occupiedSecondary(20, false);
    ll ans = 0;
    helper(board, 0, occupiedCol, occupiedPrimary,
           occupiedSecondary, ans);
    cout << ans << endl;
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
