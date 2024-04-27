#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define MIR183_PC ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

void solve() {
    // Your code here
    ll n,k;
    cin>>n>>k;
    deque<ll>d(n+1);
    for(ll i=0;i<n;i++)cin>>d[i];
    map<ll,ll>m;
    for(auto i:d){
        m[i]++;
    }
    // for(ll i=0;i<n;i++){
    //     if(m[d[i]]>=k){
	// 		cout<<(min(n,k-1))<<endl;
	// 		return;
	// 	}
    // }
    // cout<<n<<endl;
    // return;

    bool ok=false;
    for(auto i:m){
        if(i.second>=k){
            ok=true;
        }
    }
    if(ok)cout<<min(n,k-1)<<endl;
    else cout<<n<<endl;
    
}

signed main() {
    MIR183_PC;
    // Always use ll, int may give TLE
    ll t;
    cin >> t;
    // t=1;
    while (t--) {
        solve();
    }
    return 0;
}