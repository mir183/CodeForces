#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define MIR183_Mac ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

signed main() {
    MIR183_Mac;
    // Your code here
    // Always use ll, int may give TLE
    vector<ll>v(5);
    for(ll i=0; i<5; i++) cin >> v[i];
    ll sum=accumulate(v.begin(), v.end(), 0LL);
    if(sum%5==0 && sum!=0) cout << sum/5 << endl;
    else cout << -1 << endl;
    return 0;
}