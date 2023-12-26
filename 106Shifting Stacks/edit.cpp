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
        vector<ll> v(n);
        ll sum=0,need=0;
        for(ll i=0;i<n;i++){
            cin >> v[i];
        }
        for(ll i=0;i<n;i++){
            need += i;
            sum += v[i];
            if(sum<need){
                no;
                return;
            }
        }
        yes;

}


int main() {
    fasterio;
    // Your code here
    // Always use ll(long long int), int may give TLE
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    
    return 0;
}