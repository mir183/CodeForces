#include <iostream>
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
    ll n;
    cin>>n;
    deque<ll>v(n+1);
    for(ll i=1;i<=n;i++) cin>>v[i];
    sort(v.begin(),v.end());
    ll cnt=0;
    for(ll i=1;i<=n;i++){
        if(v[i]==i){
            cnt++;
        }else{
            break;
        }
    }
    cout<<++cnt<<endl;
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