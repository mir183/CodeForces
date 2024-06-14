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
    string s;
    cin>>s;
    if(s[0]!='1' or s.back()=='9'){
        no;
    }else{
        bool ok=true;
        ll n=s.size();
        for(auto i=0;i<n-1;i++){
            if(s[i]=='0'){
                ok=false;
            }
        }
        if(ok){
            yes;
        }else{
            no;
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