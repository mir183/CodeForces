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
    ll n;
    cin>>n;
    string s;
    cin>>s;
    string ans="";
    if(n==1){
        ans=s+s;
        cout<<ans<<endl;
        return;
    }else{
        ans+=s[0];
        for(int i=1;i<n;i++){
            if(s[i]<=s[i-1] and s[i]<s[0]){
                ans+=s[i];
            }else break;
        }
    }cout<<ans;
    reverse(ans.begin(),ans.end());
    cout<<ans<<endl;
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