#include <iostream>
#include <deque>
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
    ll p=0,pos=0;
    for(ll i=0;i<n;i++){
        cin>>v[i];
        // sum+=v[i];
        if(v[i]!=v[p] and pos==0){
            pos=i;
        }
    }
    if(pos==0){
        no;
        return;
    }
    yes;
    for(ll i=1;i<n;i++){
        if(v[p]!=v[i]){
            cout<<p+1<<" "<<i+1<<endl;
        }else{
            cout<<pos+1<<" "<<i+1<<endl;
        }
    }
}

signed main() {
    MIR183_Mac;
    // Always use ll, int may give TLE
    ll tt;
    // tt=1;
    cin >> tt;
    while (tt--) {
        solve();
    }
    return 0;
}