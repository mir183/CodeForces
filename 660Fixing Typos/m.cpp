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
    
    for(ll i=1;i<s.length()-1;i++){
        if (s[i]==s[i-1]){
            if(s[i]==s[i+1]){
                s.erase(i,1);
                i--;
            }else if(i<s.length()-2 and s[i+1]==s[i+2]){
                s.erase(i+1,1);
                i--;
            }
        }
    }
    cout<<s<<endl;
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