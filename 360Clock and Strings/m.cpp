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
    int a,b,c,d;
    vector<int>arr(4);
    for(int i=0;i<4;i++) {
            cin>>arr[i];
    }

    a=min(arr[0],arr[1]);
    b=max(arr[0],arr[1]);
    c=min(arr[2],arr[3]);
    d=max(arr[2],arr[3]);

    if((a<=c and c<=b and b<=d) or (c<=a and a<=d and d<=b)){
        yes;
    } else {
        no;
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