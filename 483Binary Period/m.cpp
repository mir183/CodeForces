#include <iostream>
#include<string>
#include<algorithm>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define MIR183_Mac ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

void solve() {
    // Your code here
    string t;
    cin>>t;
    ll cnt0=count(t.begin(),t.end(),'0');
    ll cnt1=count(t.begin(),t.end(),'1');
    if(cnt0==0 or cnt1==0){
        cout<<t<<endl;
        return;
    }   
    string s;

    for(ll i=0;i<t.size()-1;i++){
        if(t[i]==t[i+1]){
            s.push_back(t[i]);
            if(t[i]=='1'){
                s.push_back('0');
            }else s.push_back('1');
        }else{
            s.push_back(t[i]);
        }
    }   
    s.push_back(t[t.size()-1]);
    cout<<s<<endl;


}

signed main() {
    MIR183_Mac;
    // Always use ll, int may give TLE
    ll tt;
    cin >> tt;
    // t=1;
    while (tt--) {
        solve();
    }
    return 0;
}