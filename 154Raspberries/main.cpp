#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define fasterio                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

int main()
{
    fasterio;
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        ll even = 0, ans = k;
        for (ll i = 0; i < n; i++)
        {
            ll num;
            cin >> num;
            if (num % 2 == 0)
                even++;
            if (num % k == 0)
                ans = 0;
            ans = min(ans, k - num % k);
            if (k == 4)
            {
                if (even >= 2)
                {
                    ans = 0;
                }
                else if (even == 1)
                {
                    ans = min(ans, static_cast<ll>(1));
                }
                else
                {
                    ans = min(ans, static_cast<ll>(2));
                }
            }
        }
        cout << ans << endl;
    }

    return 0;
}
