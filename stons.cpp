#include <bits/stdc++.h>
using namespace std;

using ll = long long;
int main(void)
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n, k;
    cin >> n >> k;
    ll ans = 0;
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        ans += x;
    }
    if (ans % 2 == 1)
        cout << "Alice" << '\n';
    else
        cout << "Bob" << '\n';
    return 0;
}