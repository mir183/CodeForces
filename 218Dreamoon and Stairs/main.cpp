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
    if(n<m)cout<<-1<<endl;
    else{
        n++;
        ll ans=n/m;
        if(ans%2==0){
            cout<<ans<<endl;
        }else cout<<ans+1<<endl;
    }
    
}

int main() {
    fasterio;
    // Always use ll, int may give TLE
    ll t;
    // cin >> t;
    t=1;
    while (t--) {
        solve();
    }
    return 0;
}