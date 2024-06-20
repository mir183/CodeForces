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
    string s,t;
    cin>>s>>t;
    if(s==t){
        cout<<0<<endl;
        return;
    }else{
        ll difff=0;
        for(ll i=0;i<n;i++){
            if(s[i]!=t[i]){
                difff++;
            }
        }
        ll ans=2*difff;
        if(difff%2){
            ans--;
        }
        ll rdifff=0;
        reverse(s.begin(),s.end());
        for(ll i=0;i<n;i++){
            if(s[i]!=t[i])
            {
                rdifff++;
            }
        }
        if(!rdifff){
            ans=min(2LL,ans);

        }else if(rdifff%2==0){
            ans=min(2*rdifff-1,ans);
        }else{
            ans=min(2*rdifff,ans);
        }
        cout<<ans<<endl;


    }
}

signed main() {
    MIR183_PC;
    // Always use ll, int may give TLE
    ll q;
    cin >> q;
    // q=1;
    while (q--) {
        solve();
    }
    return 0;
}