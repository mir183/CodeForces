#include <iostream>
#include<deque>
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

    deque<ll>v(n+1);
    deque<ll>pre(n+1,0);
    for(ll i=1;i<=n;i++){
        cin>>v[i];
        pre[i]=pre[i-1]+v[i];
    }
    deque<ll>temp=v;
    sort(temp.begin(),temp.end());
    deque<ll>pre1(n+1,0);
    for(ll i=1;i<=n;i++){
        pre1[i]=pre1[i-1]+temp[i];
    }
    ll q;
    cin>>q;
    while (q--)
    {
        ll t,l,r;
        cin>>t>>l>>r;
        if(t==1){
            cout<<pre[r]-pre[l-1]<<endl;
            continue;
        }else{
            cout<<pre1[r]-pre1[l-1]<<endl;
            continue;
        }
    }
    
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