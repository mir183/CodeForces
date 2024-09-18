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
    ll n;
    cin>>n;
    ll z=0;
    string s;
    cin>>s;
    z=count(s.begin(),s.end(),'0');

    if(z==1 or z%2==0){
        cout<<"BOB"<<endl;
    }else{
        cout<<"ALICE"<<endl;
    }

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