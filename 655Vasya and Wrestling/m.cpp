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
    ll n,x;
    cin>>n;
    deque<ll>pos,neg;
    ll sum=0;
    int last=0;
    for(ll i=0;i<n;i++){
        cin>>x;
        last=x;
        sum+=x;
        if(x>=0) pos.push_back(x);
        else neg.push_back(-x);
    }
    if(sum==0){
        if(pos==neg){
            if(last>0)cout<<"first"<<endl;
            else cout<<"second"<<endl;
        }else if(pos>neg)cout<<"first"<<endl;
        else cout<<"second"<<endl;
    }else if(sum>0) cout << "first" << endl;
    else cout << "second" << endl;
}

signed main() {
    MIR183_PC;
    // Always use ll, int may give TLE
    ll tt;
    tt=1;
    // cin >> tt;
    while (tt--) {
        solve();
    }
    return 0;
}