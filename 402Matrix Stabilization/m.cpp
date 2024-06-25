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
    ll n,m;
    cin>>n>>m;
    deque<deque<ll>>mat(n,deque<ll>(m));
    for(ll i=0;i<n;i++){
        for(ll j=0;j<m;j++){
            cin>>mat[i][j];
        }
    }

    bool ok=true;
    while (ok)      
    {
        ok=false;
        ll up, down, left, right;
        for(ll i=0;i<n;i++){
            for(ll j=0;j<m;j++){
                if(i>0) up=mat[i-1][j];
                else up=0;
                if(j>0) left=mat[i][j-1];
                else left=0;
                if(i<n-1)down=mat[i+1][j];
                else down=0;
                if(j<m-1)right=mat[i][j+1];
                else right=0;
            
                ll mx=max({up, down, right,left});
                if(mat[i][j]>mx){
                    mat[i][j]=mx;
                    ok=true;
                }

            
            }
        }

    }   
        // cout<<"ANS: ";
    for(ll i=0;i<n;i++){
            for(ll j=0;j<m;j++){
                cout<<mat[i][j]<<" ";
            }
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