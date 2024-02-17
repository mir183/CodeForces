#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define fasterio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

void solve() {
    // Your code here
    int n;
    cin >> n;
    
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }

    int p=0;
    set<int> st;

    for (int i=n-1;i>=0;i--) {
        st.insert(v[i]+i+1-p);
        if (i!=0) {
            if (abs((v[i]+i+1)-(v[i-1]+i))==0) {
                p+=1;
            }
        }
    }

    vector<int> ans(st.begin(), st.end());
    sort(ans.rbegin(), ans.rend());

    for (int i : ans) {
        cout << i << " ";
    }

    cout << endl;
}

int main() {
    fasterio;
    // Always use ll, int may give TLE
    ll t;
    cin >> t;
    // t=1;
    while (t--) {
        solve();
    }
    return 0;
}