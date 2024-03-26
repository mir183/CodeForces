#include <iostream>
#include<vector>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define fasterio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

void solve() {
    // Your code here
    ll n,m;
        cin>>n>>m;
        vector<ll>v(n);
        for(ll i = 0 ; i < n ; i++) {
            cin>>v[i];
        }
        ll low=1,high = 1e10;
        while(low < high-1) {
            ll w = 0;
            ll mid=low+(high-low)/2;
            for(ll i=0;i<n;i++) {
                if(v[i]<mid) {
                    w+=(mid-v[i]);
                }
            }
            if(w>m) {
                high=mid;
            }
            else {
                low=mid;
            }
        }
        cout<<low<<endl;

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