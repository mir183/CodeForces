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
    cin>>t;
    while (t--)
    {
        ll n;
        cin>>n;
        vector<ll> v(n);
        ll ans=0;

        for(ll i=0;i<n;i++)cin>>v[i];

        for(ll i=1;i<=n;i++){
            if(n%i==0){
                ll k=n/i,g=0;
                for(ll j=0;j<k;j++){
                    ll d=0;
                    for(ll p=j;p<n;p+=k){
                        d=__gcd(d,abs(v[j]-v[p]));
                    }
                    g=__gcd(g,d);
                }
                ans+=(g!=1);
            }
        }
        cout<<ans<<endl;

    }
    
    return 0;
}