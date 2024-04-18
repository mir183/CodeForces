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
    stack<char>st;
    for(ll i=0;i<s.size();i++){
        if(st.empty() or s[i]=='A'){
            st.push(s[i]);
        }else if(s[i]=='B' and st.top()=='A'){
            st.pop();
        }else if(s[i]=='B' and st.top()=='B'){
            st.pop();
        }
    }
    cout<<st.size()<<endl;
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