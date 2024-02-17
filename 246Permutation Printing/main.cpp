#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define fasterio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

void solve(){
    ll n;
    cin >> n;
    ll a=n,b=1;
    vector<ll> v;
    for(ll i=1;i<=n/2;i++){
        v.push_back(a);
        v.push_back(b);
        a--;
        b++;
    }
    if(n%2){
        v.push_back(a);
    }

    for(ll i=0;i<v.size();i++){
        cout << v[i] << " ";
    }
    cout << endl;
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