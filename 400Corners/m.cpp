#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define MIR183_PC ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

void solve() {
    // Your code here
    ll n,m;
    cin>>n>>m;
    ll cnt=0;
    deque<deque<char>>g(n,deque<char>(m));
    for(ll i=0;i<n;i++){
        for(ll j=0;j<m;j++){
            cin>>g[i][j];
            if(g[i][j]=='1')cnt++;
        }
    }
    ll tmp=4;
    for(ll i=0;i<n-1;i++){
            for(ll j=0;j<m-1;j++){
                ll one=0;
                if(g[i][j]=='1')one++;
                if(g[i+1][j]=='1') one++;
                if(g[i][j+1]=='1') one++;
                if(g[i+1][j+1]=='1') one++;

                if(one <= 2) tmp = min(tmp,1LL);
                else if(one == 3) tmp = min(tmp,2LL);
                else if(one == 4) tmp = min(tmp,3LL);
            }
        }
        if(tmp==4){
            cout<<0<<endl;
        }else{
            cout<<cnt-tmp+1<<endl;
        }

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