#include <iostream>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define MIR183_Mac ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

void solve() {
    // Your code here
    ll c,m,x;
    cin>>c>>m>>x;
    ll mn=min(c,m);
    // mn-=x;
    // if(mn<0){
    //     cout<<1<<endl;
    // }else{
    //     cout<<mn<<endl;
    // }
    ll r=min(mn,(c+m+x)/3);
    cout<<r<<endl;
}

signed main() {
    MIR183_Mac;
    // Always use ll, int may give TLE
    ll tt;
    // tt=1;
    cin >> tt;
    while (tt--) {
        solve();
    }
    return 0;
}