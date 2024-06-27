#include <iostream>
#include<deque>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define MIR183_Mac ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

void solve() {
    // Your code here
    ll n;
    cin >> n;
    deque<ll> odd, even;
    for(ll i=0;i<n;i++){
        ll x;
        cin>>x;
        if(x%2==0){
            even.push_back(i+1);
        }else{
            odd.push_back(i+1);
        
        }
    }
    if(odd.size()>even.size()){
        cout<<even[0]<<endl;
    }else{
        cout<<odd[0]<<endl;
    }
}

signed main() {
    MIR183_Mac;
    // Always use ll, int may give TLE
    ll t;
    // cin >> t;
    t=1;
    while (t--) {
        solve();
    }
    return 0;
}