#include<bits/stdc++.h>
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
    cin>>t;
    while (t--)
    {
        ll n;                  
        cin >> n;
        vector<ll> v(n);
        ll ng=0;
        ll ans=0,mn=LLONG_MAX;
        for(ll i=0;i<n;i++){
            cin>>v[i];
            if(v[i]<0){
                ng++;
            }
            ans+=abs(v[i]);
            mn=min(mn,abs(v[i]));
        }

        if(ng%2){
            ans-=(2LL*mn);
        }

        cout << ans << endl;
    }
    
    return 0;
}