#include <iostream>
#include <vector>
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
        cin>>n;
        vector<ll> v(n);
        for(ll i=0; i<n; i++) cin>>v[i];
        ll mn=LLONG_MAX;
        ll ans=0;
        for(ll i=n-1;i>=0;i--){      
            if(v[i]>mn){
                ans++;
            }else{
                mn=v[i];
            }

        }
        cout<<ans<<endl;
    }
    
    return 0;
}