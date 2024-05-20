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
    ll n;
    cin>>n;
    deque<ll> d(n);

    for(ll i=0;i<n;i++) cin>>d[i];
    if(d[n-2]>d[n-1]){
        cout<<-1<<endl;
        // return;
    }else{
        if(d[n-1]<0){
            if(is_sorted(d.begin(),d.end())){
                cout<<0<<endl;
                // return;
            }else{
                cout<<-1<<endl;
            }
        }else{
            cout<<n-2<<endl;
            for(ll i=1;i<=n-2;i++){
                cout<<i<<" "<<n-1<<" "<<n<<endl;
            }
        }
    }

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