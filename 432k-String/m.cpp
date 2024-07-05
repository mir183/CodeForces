#include <iostream>
#include<string>
#include<map>
#include<unordered_map>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define MIR183_Mac ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

void solve() {
    // Your code here
    ll n;
    cin>>n;
    string s;
    cin>>s;
    unordered_map<char,ll>m;
    for(int i=0;i<s.size();i++){
        m[s[i]]++;
    }
    string ans;
    for(auto [x,y]:m){
        if(y%n){
            cout<<-1<<endl;
            return;
        }else{
            ans+=string(y/n,x);
        }
    }
    for(ll i=0;i<n;i++){
        cout<<ans;
    }
    cout<<endl;
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