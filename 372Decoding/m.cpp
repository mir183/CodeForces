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
    string s;
    cin>>s;
    deque<char> d(n);
    while (n!=0)
    {
        if(n%2){
            d.push_back(s[0]);
        }else{
            d.push_front(s[0]);
        }
        s.erase(0,1);
        n--;
    }
    for(auto i:d){
        cout<<i;
    }
    

}

signed main() {
    MIR183_PC;
    // Always use ll, int may give TLE
    ll t;
    // cin >> t;
    t=1;
    while (t--) {
        solve();
    }
    return 0;
}