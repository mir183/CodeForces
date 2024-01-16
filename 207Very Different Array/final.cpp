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
    ll n,m;
    cin>>n>>m;
    vector<ll> a(n);
    vector<ll> b(m);
    for(auto &i:a)cin>>i;
    for(auto &i:b)cin>>i;

    sort(a.begin(),a.end());
    sort(b.begin(),b.end());

    ll ans=0;
    ll la=0;
    ll ra=n-1;
    ll lb=0;
    ll rb=m-1;

    while(la<=ra){
        ll left=abs(a[la]-b[rb]);
        ll right=abs(a[ra]-b[lb]);
        if(left>=right){
            ans+=left;
            la++;
            rb--;
        }
        else{
            ans+=right;
            ra--;
            lb++;
        }

    }   
    cout<<ans<<endl;


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