#include <iostream>
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
    map<ll,ll>m;
    for(ll i=0;i<n;i++){
        ll x;
        cin>>x;
        m[x]++;
    }
    if(n==1){
        no;
        return;
    }
    if(m.size()==1){
        for(auto i:m){
            if(i.second%2==0){
                yes;
            }else  no;
        }
        return;
    }
    ll x=m[100];
    ll y=m[200];
    if(y*2==x){
        yes;
    }else{
        y*=2;
        ll d=abs(y-x);
        if(d%2==0){
            yes;
        }else no;
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