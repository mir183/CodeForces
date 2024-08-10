#include <iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define MIR183_Mac ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

// bool ispal(string s){
//     string t=s;
//     reverse(s.begin(),s.end());
//     return s==t;
// }

void solve() {
    // Your code here
    ll n;
    cin>>n;
    vector<string>s(n);
    for(ll i=0;i<n;i++){
        cin>>s[i];
    }
    bool ok=false;
    for(ll i=0;i<n-2;i++){
        for(ll j=i+2;j<n;j++){
            if(s[i]==s[j]){
                yes;
                return;
            }
        }
        
    }
    no;

}

signed main() {
    MIR183_Mac;
    // Always use ll, int may give TLE
    ll tt;
    // tt=1;
    cin >> tt;
    while (tt--) {
        solve();
    }
    return 0;
}