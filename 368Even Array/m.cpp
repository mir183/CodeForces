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
    ll even=0,odd=0;
    for(ll i=0;i<n;i++){
        ll x;
        cin>>x;
        if(x%2!=i%2){
            if(i%2==0){
                even++;
            }
            else{
                odd++;
            }
        }
    }
    if(even!=odd){
        cout<<-1<<endl;
    }
    else{
        cout<<even<<endl;
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