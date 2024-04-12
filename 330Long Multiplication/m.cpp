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
    string a,b;
    cin>>a>>b;
    string fa="",fb="";
    for(ll i=0;i<a.size();i++){
        char ca=a[i];
        char cb=b[i];
        char mx=max(ca,cb);
        char mn=min(ca,cb);
        if(fa>=fb){
            fb+=mx;
            fa+=mn;
        }else{
            fb+=mn;
            fa+=mx;
        }
    }

    cout<<fa<<endl<<fb<<endl;

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