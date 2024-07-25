#include <iostream>
#include<deque>
#include<set>
#include<string>
#include<algorithm>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define MIR183_Mac ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl


string reversed(string str) {
    reverse(str.begin(), str.end());
    return str;
}
bool is_palindrome(string str) {
    return str == reversed(str);
}

void solve() {
    // Your code here
    ll n,k;
    cin>>n>>k;
    deque<string>v(n);
    for(auto i=0;i<n;i++){
        cin>>v[i];
    }

    string f,m,b;
    for(auto i=0;i<n;i++){
        if(is_palindrome(v[i])){
            m=v[i];
            continue;
        }
        for(auto j=i+1;j<n;j++){
            if(v[i]==reversed(v[j])){
                f+=v[i];
                b=v[j]+b;
            }
        }
    }
    string s=f+m+b;
    cout<<s.size()<<endl<<s<<endl;
    
    
}
signed main() {
    MIR183_Mac;
    // Always use ll, int may give TLE
    ll t;
    // cin >> t;
    t=1;
    while (t--) {
        solve();
    }
    return 0;
}