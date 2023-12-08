#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define fasterio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

int main() {
    fasterio;
    ll t;
    cin >> t;
    while(t--) {
        ll a,b,n;
        cin >> a >> b >> n;
        vector<ll> v(n);
        for(ll i = 0; i < n; i++) cin >> v[i];
        ll sum=b;
        for(ll i=0;i<n;i++){
            if(v[i]+1<=a){
                sum+=v[i];
            }
            else{
                sum+=a-1;
            }
        }
        cout << sum << endl;
    }
    return 0;
}