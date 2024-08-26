#include <iostream>
#include <deque>
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
    deque<ll>v(2*n);
    for(ll i=0;i<2*n;i++) cin>>v[i];
    ll cycle;
    if(n%2==0){
        cycle =4;
    }else{
        cycle =2*n;
    }

    ll pos=-1;
    for(ll i=0;i<cycle;i++){
        if(is_sorted(v.begin(),v.end())){
            pos=i;
            break;
        }
        if(i%2==1){
            for(ll j=0;j<n;j++){
                swap(v[j],v[j+n]);
            }
        }else{
            for(ll j=0;j<2*n;j+=2){
                swap(v[j],v[j+1]);
            }
        }
    }
    cout<<min(pos,cycle-pos)<<endl;

}

signed main() {
    MIR183_Mac;
    // Always use ll, int may give TLE
    ll tt;
    tt=1;
    // cin >> tt;
    while (tt--) {
        solve();
    }
    return 0;
}