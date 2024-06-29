#include <iostream>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define MIR183_Mac ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

void solve() {
    // Your code here
    ll x,y;
    cin>>x>>y;
    if(x>3){
        yes;
        return;
    }else if(x==1 ){
        if(y==1){
            yes;
        }else no;
        return;
    }else if(y<=3){
        yes;
        return;
    }
    no;
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