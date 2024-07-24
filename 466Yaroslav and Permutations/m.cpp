#include <iostream>
#include<string>
#include<algorithm>
#include<deque>
#include<map>
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
    deque<ll>v(n);
    map<ll,ll>m;

    for(ll i=0;i<n;i++){
        ll x;
        cin>>x;
        v[i]=x;
        m[x]++;
    }
    if(n==1){
        yes;
        return;
    }
    if(m.size()==1){
        no;
        return;
    }
    ll d=(n+1)/2;
    for(auto [x,y]:m){
        if(y>d){
            no;
            return;
        }
    }
    yes;


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