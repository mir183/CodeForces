#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define MIR183_PC ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

const ll N= 1e6;

string a[N];
bool ans[N];

void solve() {
    // Your code here
    ll n;
    cin>>n;
    set<string>st;
    for(ll i=0;i<n;i++){
        cin>>a[i];
        st.insert(a[i]);
        ans[i]=0;
    }
    for(ll i=0;i<n;i++){
        for(ll j=1;j<a[i].size();j++){
            string s1="",s2="";
            for(ll k=0;k<j;k++){
                s1+=a[i][k];

            }
            for(ll k=j;k<a[i].size();k++){
                s2+=a[i][k];
            }
            if(st.find(s1)!=st.end() and st.find(s2)!=st.end()){
                ans[i]=1;
                break;
            }
        }
    }
    for(ll i=0;i<n;i++){
        cout<<ans[i];
    }
    cout<<endl;
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