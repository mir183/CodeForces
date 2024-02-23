#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define fasterio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

bool gdar(const vector<ll>& arr) {
    ll sum=0;
    for (ll num:arr) {
        sum+=num;
    }
    if (sum<=0) {
        return false;
    }
    for (ll num:arr) {
        ll b = sum - num;
        if (b<=0 || b==num) {
            return false;
        }
    }
    return true;
}

void solve() {
    // Your code here
    ll n,q;
    cin >> n >> q;
    vector<ll> arr(n);
    for (ll i=0;i<n;i++) cin >> arr[i];
    for (ll i=0;i<q;i++) {
        ll l,r;
        cin >> l >> r;
        vector<ll> b(arr.begin()+l-1,arr.begin()+r);
        if (gdar(b)) yes;
        else no;
    }
    
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


