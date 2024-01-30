//题目： k 是奇数，每次取 k^m 个，m >= 0
//假设只有一堆小饼干，有 x 个小饼干，先手胜还是输 ?----> 诈骗问题

//k^m 是奇数, 又因为 k^m 可以等于 1
//如果 x 是奇数， 无论后手怎么取，先手永远取 1 ，等于说在先手操作之后，小饼干的数量永远是 偶数
//而 0 是偶数--->先手必胜
//如果 x 是偶数，无论先手怎么取，后手永远取 1 ，同理，后手必胜

//回到原问题
//设一共有 p 个小饼干(不管有多少堆)
//如果 p 是奇数，先手永远取 1 ，先手必胜
//如果 p 是偶数，后手永远取 1 ，后手必胜

//加强这道题，如果 k 毫无限制--->奇数偶数不限制
//可以用 sg 函数解决
//大致提一句，对于互不相干的平等博弈而言，可以定义博弈和，这个和是博弈的 sg 值的异或
//不平等博弈可以用超现实数
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
