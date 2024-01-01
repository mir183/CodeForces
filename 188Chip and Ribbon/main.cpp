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
    // Always use ll(long long int), int may give TLE
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> v(n);
        for(ll i=0;i<n;i++)
        {
            cin >> v[i];
        }
        ll ans=0, sum=0;
        for(ll i=0;i<n;i++){
            if(v[i]>sum){
                ans+=v[i]-sum;
            }
            sum=v[i];
        }
        cout << ans-1 << endl;
    }
    
    return 0;
}