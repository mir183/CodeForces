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
    ll n;
    cin>>n;
    string s;
    cin>>s;
    bool sorted=true;
    for(ll i=1;i<n;i++){
        if(s[i]<s[i-1])sorted=false;

    }
    if(sorted){
        cout<<s<<endl;
        return;
    }
    string ans;
    for(int i=0;i<n;i++){
        if(s[i]=='1')break;
        ans.push_back('0');
    }
    ans.push_back('0');
    reverse(s.begin(),s.end());
    for(int i=0;i<n;i++){
        if(s[i]=='0')break;
        ans.push_back('1');
    }
    cout<<ans<<endl;

}

signed main() {
    MIR183_Mac;
    // Always use ll, int may give TLE
    ll t;
    cin >> t;
    // t=1;
    while (t--) {
        solve();
    }
    return 0;
}