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
    string a,b;
    cin>>a>>b;
    // reverse(a.begin(),a.end());
    if(a.size()!=b.size()){
        no;
        return;
    }

    ll cnt=0;
    deque<ll>d;
    for(ll i=0;i<a.size();i++){
        if(a[i]!=b[i])d.push_back(i);

    }
    if(d.size()!=2){
        no;
        return;
    }
    // else yes;
    swap(a[d[0]],a[d[1]]);
    if(a==b){
        yes;
    }else no;
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