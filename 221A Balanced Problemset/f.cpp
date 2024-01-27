#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define fasterio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

void solve() {
int x, n;
        cin >> x >> n;
        int q = x / n;
        set<int> st;
        for (int i = 1; i <= sqrt(x); i++) {
            if (x % i == 0) {
                st.insert(i);
                st.insert(x / i);
            }
        }
        auto it = st.lower_bound(q);
        if (it != st.begin() && *it > q) {
            it--;
        }

        cout << *it << endl;
}



int main() {
    fasterio;
    // Always use ll, int may give TLE
    ll t;
    cin >> t;
    // t=1;
    while (t--) {
        solve();
    }
    return 0;
}