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
    ll n=s.size();
    set<char>st;
    for(ll i=0;i<n;i++){
        st.insert(s[i]);
    }
    if(st.size()==1)no;
    else{
        for(ll i=0;i<n-1;i++){
            if(s[i]!=s[i+1]){
                swap(s[i],s[i+1]);
            }
        }
        yes;
        cout<<s<<endl;

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