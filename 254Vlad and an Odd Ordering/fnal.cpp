#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define fasterio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

void solve() {
    // Your code here
    ll n,k;
    cin >> n >> k;
    for(ll i=1;i<=log2(n)+1;i++){
        ll x=pow(2,i);
        ll y=(n+(x/2))/x;
        if(k<=y){
            if(k==1){
                cout<<x/2<<endl;
                return;
            }else{
                ll ans=(x/2)+(k-1)*x;
                cout<<ans<<endl;
                return;
            }
        }else{
            k-=y;
        }

    }
    cout<<k<<endl;
}

int main() {
    fasterio;
    // Always use ll, int may give TLE
    ll t;
    cin >> t;
    // t=1;
    while (t--) {
        solve();
    }
    return 0;
}