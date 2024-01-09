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
    // Your code here
    // Always use ll, int may give TLE
    ll t;
    cin >> t;
    while (t--)
    {
        ll n,q,k;
        cin >> n >> k >> q;
        vector<ll> a(n);
        for(ll i=0;i<n;i++) cin >> a[i];
        ll ans=0;
        ll cons=0;

    for(int i=0;i<n;i++){
            if(a[i]<=q){
                cons++;
                if(i==n-1 or a[i+1]>q){
                if(cons>=k){
                    ll x=cons-k+1LL;
                    ll add=(x*(x+1LL))/2LL;
                    ans+=add;
                }
                cons=0;
                }
            }
        }
        cout << ans << endl;

    }
    
    return 0;
}
