#include <iostream>
#include<string>
#include<algorithm>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define MIR183_Mac ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

void solve() {
    // Your code here
    string s;
    cin>>s;
    string ans="";
    bool f=false;
    ll cnt=count(s.begin(),s.end(),'0');
    
    for(ll i=0;i<s.size();i++){
        if(!f and s[i]=='0'){
            f=true;
            continue;
        } ans+=s[i];
    }
    if(cnt==0){
        ans.erase(ans.end()-1);
    }
    cout<<ans<<endl;
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