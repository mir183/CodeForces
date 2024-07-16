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
    cin>>n;
    // deque<ll>v(n);
    deque<ll>f,s,t;
    for(ll i=0;i<n;i++){
        ll x;
        cin>>x;
        // v[i]=x;
        if(x<0){
            f.push_back(x);
        }
        if(x>0){
            s.push_back(x);
        }
        if(x==0){
            t.push_back(x);
        }
    }
    if (f.size() % 2 == 0) {
        t.push_back(f.back());
        f.pop_back();
    }

    if (s.size() == 0) {
        for(int i = 0; i < 2; i++){
            s.push_back(f.back()), f.pop_back();
        }
    }

    cout<<f.size()<<" ";
    for(auto i:f) cout<<i<<" ";
    cout<<endl;
    cout<<s.size()<<" ";
    for(auto i:s) cout<<i<<" ";
    cout<<endl;
    cout<<t.size()<<" ";
    for(auto i:t) cout<<i<<" ";
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