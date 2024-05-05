#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define MIR183_PC ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

void solve(){
    ll n,k;
    cin>>n>>k;
    if(n%2){
        cout<<n/2<<" "<<n/2<<" "<<1<<endl;
    }else{
        if(n%4==0){
            cout<<n/2<<" "<<n/4<<" "<<n/4<<endl;
        }
        else{
            cout<<2<<" "<<(n-2)/2<<" "<<(n-2)/2<<endl;
        }
    }
}

signed main() {
    MIR183_PC;
    // Always use ll, int may give TLE
    ll t;
    cin >> t;
    // t=1;
    while (t--) {
        solve();
    }
    return 0;
}