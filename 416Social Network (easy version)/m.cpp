#include <iostream>
#include<vector>
#include<deque>
#include<algorithm>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define MIR183_Mac ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

void solve() {
    // Your code here
    ll n,k;
    cin>>n>>k;
    vector<ll>v(n);
    for(ll i=0;i<n;i++){
        cin>>v[i];
    }
    ll m=min(n,k);
    deque<ll>d;
    for(ll i=0;i<n;i++){
        ll x=v[i];
        auto it=find(d.begin(),d.end(),x);
        if(it==d.end()){
            if(d.size()<m){
                d.push_front(x);
            }else{
                d.pop_back();
                d.push_front(x);
                
            }
        }
    }
        // d.resize();
    
    cout<<d.size()<<endl;
    for(auto i:d){
        cout<<i<<" ";
    }
    cout<<endl;


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