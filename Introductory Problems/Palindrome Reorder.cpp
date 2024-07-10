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
    string s;
    cin >> s;
    vector<int> count(26, 0);
    for (char c : s)
    {
        count[c - 'A']++;
    }

    int oddCount = 0;
    char oddChar = ' ';
    for (int i = 0; i < 26; i++)
    {
        if (count[i] % 2 == 1)
        {
            oddCount++;
            oddChar = 'A' + i;
        }
    }

    if (oddCount > 1)
    {
        cout << "NO SOLUTION" << endl;
        return;
    }

    string result;
    for (int i = 0; i < 26; i++)
    {
        if (count[i] > 0)
        {
            string chars(count[i] / 2, 'A' + i);
            result += chars;
        }
    }

    string palindrome = result;
    if (oddCount == 1)
    {
        palindrome += oddChar;
    }
    reverse(result.begin(), result.end());
    palindrome += result;

    cout << palindrome << endl;
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