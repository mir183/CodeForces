#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define fasterio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define inf LLONG_MAX

ll CC(vector<ll>& v, ll n) {
    if (n<=1000000) {
        vector<ll> dp(n+1,inf);
        dp[0]=0;
        for (ll i=1;i<=n;i++) {
            for (auto coin : v) {
                if (coin<=i) {
                    if (dp[i-coin]!=inf) {
                        dp[i]=min(dp[i],dp[i-coin]+1);
                    }
                }
            }
        }
        if (dp[n]==inf) {
            return -1;
        } else{
            return dp[n];
        }
    } else {
        if (n % 15 == 0) {
            return n/15;
        } else {
            ll rm = n%15;
            ll cnt=n/15;
            if (rm <= 6) {
                return cnt+1;
            } else if (rm <= 10){
                return cnt+2;
            } else if (rm <= 13){ 
                return cnt+3;
            } else {
                return cnt+4+1;
            }
        }
    }
}

int main() {
    fasterio;
    ll t;
    cin>>t;
    while (t--) {
        vector<ll>v={1, 3, 6, 10, 15};
        int n;
        cin>>n;
        ll ans=CC(v,n);
        cout<<ans<<endl;
    }
    return 0;
}