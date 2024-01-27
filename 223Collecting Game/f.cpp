#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define fasterio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

void solve() {
    int n;
    cin >> n;
    vector<int> v(n), v1, v2(n);
    v2[0] = 0;
    for (auto &i : v) {
        cin >> i;
    }
    v1 = v;
    sort(v.begin(), v.end());
    for (int j = 0; j < n - 1; j++) {
        v2[j + 1] = v[j] + v2[j];
    }
    int c = 0;
    map<int, int> mp;
    for (int j = n - 1; j >= 0; j--) {
        mp[v[j]] = j + c;
        if (v2[j] >= v[j]) {
            c++;
        } else {
            c = 0;
        }
    }
    for (int j = 0; j < n; j++) {
        cout << mp[v1[j]] << " ";
    }
    cout << endl;
}

int main() {
    fasterio;
    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
