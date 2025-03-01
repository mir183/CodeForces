#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define MIR183_PC ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

void solve() {
    // Your code here
    ll a,b,n;
    cin>>a>>b>>n;

    for(ll i=0;i<10;i++){
        if((a*10+i)%b==0){
            cout<<a<<i;
            for(ll j=0;j<n-1;j++){
                cout<<0;
            }
            cout<<endl;
            return;
        }
    }
    cout<<-1<<endl;
    return;

}

signed main() {
    MIR183_PC;
    // Always use ll, int may give TLE
    ll tt;
    tt=1;
    // cin >> tt;
    while (tt--) {
        solve();
    }
    return 0;
}