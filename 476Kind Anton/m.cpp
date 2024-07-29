#include <iostream>
#include <vector>
#include <algorithm>
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
    vector<ll> a(n);
    vector<ll> b(n);
    for(ll i=0;i<n;i++) cin>>a[i];
    for(ll i=0;i<n;i++) cin>>b[i];
    // if(a[0]!=b[0]) {
    //     cout<<"NO"<<endl;
    //     return;
    // }
    bool good=true;
    bool pos=false;
    bool neg=false;
    for(ll i=0;i<n;i++){
        if(b[i]>a[i]){
            good=good and pos;
        }else if(b[i]<a[i]){
            good=good and neg;
        }
        if(a[i]==1) pos=true;
        if(a[i]==-1) neg=true;
    }
    cout<<(good?"YES":"NO")<<endl;
}

signed main() {
    MIR183_Mac;
    // Always use ll, int may give TLE
    ll t;
    cin >> t;
    // t=1;
    while (t--) {
        solve();
    }
    return 0;
}