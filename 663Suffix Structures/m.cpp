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
    string s,t;
    cin>>s>>t;
    map<char,ll>S,T;
    for(auto i:s) S[i]++;
    for(auto i:t) T[i]++;
    if(S==T){
        cout<<"array"<<endl;
        return;
    }
    for(auto c:t){
        if(T[c]>S[c]){
            cout<<"need tree"<<endl;
            return;
        }
    }
    ll i=0,j=0;// init.
    for(;i<s.size() and j<t.size();){
        if(s[i]==t[j]){
            i++;
            j++;
        }
        else i++;
        if(j==t.size()){
            cout<<"automaton"<<endl;
            return;
        }
    }
    cout<<"both"<<endl;
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