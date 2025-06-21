#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define MIR183_PC ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl;

ll pow10(ll n){
    
    ll ans=1;
    while(n--) {
        ans*=10;
    }
    return ans;

}


void solve() {
    // Your code here
    ll n,k;
    cin>>n >>k;
    k++;
    deque<ll>v(n);
    for(ll i=0;i<n;i++) {
        cin>>v[i];
    }
    sort(v.begin(), v.end());
    v.push_back(18);
    ll ans=0;
    for(ll i=0;i<n;i++){
        ll most=pow10(v[i+1]-v[i])-1;
        ll take=min(most, k);
        k-=take;
        ans+= take * pow10(v[i]);
    }
    cout<<ans<<endl;
}

signed main() {
    MIR183_PC;
    // Always use ll, int may give TLE
    ll tt;
    // tt=1;
    cin >> tt;
    while (tt--) {
        solve();
    }
    return 0;
}