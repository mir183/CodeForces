#include <iostream>
#include<string>
#include<set>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define MIR183_Mac ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

void solve() {
    // Your code here
    ll n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    s.push_back('#');
    set<char> st;
    for(ll i=0;i<k;i++) {
        char c;
        cin>>c;
        st.insert(c);
    }
    int last=-1;
    ll total=0;
    for(ll i=0;i<=n;i++) {
        if(st.count(s[i])==0){
            ll len=i-last-1;
            total+=len*(len+1)/2;
            last=i;
        }
    }
    cout<<total<<endl;
}

signed main() {
    MIR183_Mac;
    // Always use ll, int may give TLE
    ll tt;
    tt=1;
    // cin >> tt;
    while (tt--) {
        solve();
    }
    return 0;
}