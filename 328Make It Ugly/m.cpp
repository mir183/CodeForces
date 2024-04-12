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
    deque<ll>d(n);
    set<ll>s;
    for(ll i=0;i<n;i++){
        cin>>d[i];
        s.insert(d[i]);
    }
    if(s.size()==1){
        cout<<-1<<endl;
        return;
    }
    deque<ll>ans;
    ll cnt=0;
    for(ll i=0;i<n;i++){
        if(d[i]==d[0])cnt++;
        else{
            ans.push_back(cnt);
            cnt=0;
        }
    }
    if(cnt>0)ans.push_back(cnt);
    cout<<*min_element(ans.begin(),ans.end())<<endl;
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