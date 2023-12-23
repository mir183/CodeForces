#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define fasterio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;

int main() {
    fasterio;
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        ll sum = 0;

        vector<ll> l(n);
        for(ll i = 0; i < n; i++) cin >> l[i];
        sort(l.begin(), l.end(), greater<ll>());

        vector<ll> r(n);
        multiset<ll> R;
        for(ll i = 0; i < n; i++) {
            cin >> r[i];
            R.insert(r[i]);
        }

        vector<ll> c(n);
        for(ll i = 0; i < n; i++) cin >> c[i];
        sort(c.begin(), c.end());

        vector<ll>xyz(n);

        for (ll i = 0; i < n; i++) {
            auto it=R.lower_bound(l[i]);
            xyz[i]=*it-l[i];
            // cout<<"*it: "<<*it<<endl;
            R.erase(it);
        }
        sort(xyz.begin(), xyz.end(), greater<ll>());

        for(int i = 0; i < n; i++) {
            sum+=xyz[i]*c[i];
        }
        // cout<<"sum: "<<endl;
        cout << sum << endl;

        //         cout << "l: ";
        // for(int i=0;i<n;i++){
        //     cout << l[i] << " ";
        // }
        // cout << endl;
        // cout << "r: ";
        // for(int i=0;i<n;i++){
        //     cout << r[i] << " ";
        // }
        // cout << endl;
        // cout << "c: ";
        // for(int i=0;i<n;i++){
        //     cout << c[i] << " ";
        // }
        // cout << endl;

        // cout << "xyz: ";
        // for(int i=0;i<n;i++){
        //     cout << xyz[i] << " ";
        // }
        // cout << endl;


    }

    return 0;
}
