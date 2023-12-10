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
    int t;
    cin >> t;
    while (t--)
    {
        ll n,q;
        cin >> n >> q;
        vector<ll> v(n+1);
        vector<ll> pref(n+1);
        ll sum=0;
        for(ll i = 1; i <= n; i++) {
            cin >> v[i];
            sum += v[i];
            pref[i]=pref[i-1];
            pref[i]+=v[i];
            }
            ll ans=0;
        for(ll i=0;i<q;i++)
        {
            ll l,r,k;
            cin >> l >> r >> k;
            ans = pref[n] -(pref[r]-pref[l-1])+k*(r-l+1);
        
        if(ans%2==1){
            yes;
        }
        else{
            no;
        }
        }


    }
    
    return 0;
}