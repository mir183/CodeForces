#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define fasterio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

void solve() {
    // Your code here
    ll n;
    cin >> n;
    vector<ll> a(n);
    for(ll i=0;i<n;i++) cin >> a[i];
    ll b=a[0];

    for(ll i=1;i<n;i++){
        if(a[i]>b){
            b=a[i];
        }else{
            ll c=a[i];
            ll d=2;
            while(c<=b){
                c=a[i]*d;
                d++;
            }
            b=c;

        }
    }
    cout << b << endl;

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