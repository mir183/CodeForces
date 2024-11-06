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
    string s="47";
    while(true){
        sort(s.begin(),s.end());
        while(true){
            if(stoll(s)>=n){
                cout<<s<<endl;
                return;
            }
            if(!next_permutation(s.begin(),s.end())){
                break;
        }
    }
    s+="47";
    }

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