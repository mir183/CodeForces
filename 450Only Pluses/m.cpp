#include <iostream>
#include<algorithm>
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
    const ll n=3;
    deque<ll>v(n);
    for(ll i=0;i<n;i++){
        cin>>v[i];
    }
    ll itr=5;
    while (itr--)
    {
        sort(v.begin(),v.end());
        v.front()++;
    }
    ll p=1;
    for(auto i:v){
        p*=i;
    }cout<<p<<endl;
    
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