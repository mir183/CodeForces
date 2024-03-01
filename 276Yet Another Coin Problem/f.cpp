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
    while (t--){
        // vector<ll>v={1, 3, 6, 10, 15};
        ll n,ans;
        cin>>n;
        ans=n;
        ll i,j,k,l;
        for (ll i=0;i<5;i++) {
            for (ll j=0;j<5;j++) {
                for (ll k=0;k<5;k++) {
                    for (ll l=0;l<5;l++) {
                        ll magical_eqn=i*10+j*6+k*3+l*1;
                        if (n-(magical_eqn)>=0 and (n-(magical_eqn))%15==0) {
                            ans=min(ans,i+j+k+l+(n-(magical_eqn))/15);
                        }
                    }
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}