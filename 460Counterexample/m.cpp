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
    ll l,r;
    cin>>l>>r;
    if(r-l+1<3){
        cout<<-1<<endl;
        return;
    }
    if(l%2==0){
        cout<<l<<" "<<l+1<<" "<<l+2<<endl;
        return;
    }
    if(r-l+1>3){
        cout<<l+1<<" "<<l+2<<" "<<l+3<<endl;
        return;
    }
    cout<<-1<<endl;
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