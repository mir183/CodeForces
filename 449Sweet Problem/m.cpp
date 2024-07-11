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
    deque<ll>v(3);
    for(ll i=0;i<3;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    if(v[2]>=v[0]+v[1]){
        cout<<v[0]+v[1]<<endl;
    }
    else{
        cout<<(v[0]+v[1]+v[2])/2<<endl;
    }
    
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