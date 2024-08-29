#include <iostream>
#include<deque>
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
    deque<ll>a(2*n+1);
    deque<bool>vis(2*n+1,false);
    for(ll i=1;i<2*n;i+=2){
        cin>>a[i];
        vis[a[i]]=1;
    }
    for(ll i=2;i<=2*n;i+=2){
        ll x=a[i-1];
        while(x<=2*n and vis[x]==true)x++;
        if(x>2*n){
            cout<<-1<<endl;
            return;
            
        }
        vis[x]=true;
            a[i]=x;
    }

    for (ll i=1;i<=2*n;i++) {
		cout<<a[i]<<" ";
	}cout<<endl;
}

signed main() {
    MIR183_Mac;
    // Always use ll, int may give TLE
    ll tt;
    tt=1;
    cin >> tt;
    while (tt--) {
        solve();
    }
    return 0;
}