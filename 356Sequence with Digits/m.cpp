#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define MIR183_PC ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

ll fnc(ll n){
    ll mn=10,mx=0;
    while(n>0){
        ll x=n%10;
        n/=10;
        mn=min(mn,x);
        mx=max(mx,x);
    }
    return mn*mx;
}

void solve() {
    // Your code here
    ll n,k;
    cin>>n>>k;k--;
    while(k--){
        string s= to_string(n);
        sort(s.begin(),s.end());
        if(s[0]=='0') break;
        ll add=(s[0]-'0')*(s[s.size()-1]-'0');
        n+=add;
    }
    cout<<n<<endl;
    
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