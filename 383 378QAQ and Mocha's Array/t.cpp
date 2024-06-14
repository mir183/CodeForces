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
    deque<ll>d(n);
    for(ll i=0;i<n;i++){
        cin>>d[i];
    }
    ll ok=true;
    sort(d.begin(),d.end());
    ll mna=d[0];
    deque<ll>db;
    for(ll i=1;i<n;i++){
        if(d[i]%mna!=0){
            db.push_back(d[i]);
        }
    }
    sort(db.begin(),db.end());

    ll mnb=db[0];

    for(ll i=1;i<db.size();i++){
        if(db[i]%mnb!=0){
            ok=false;
            break;
        }
    }
    if(ok)yes;
    else no;
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