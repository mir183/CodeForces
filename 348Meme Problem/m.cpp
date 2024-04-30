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
    double d;
    cin>>d;
    if(d==0){
        cout<<"Y ";
        cout<<"0.000000000 0.000000000"<<endl;
    return;
    }
    if(d==1 or d==2 or d==3){
        cout<<"N"<<endl;
        return;
    }
    if(d==4){
        cout<<"Y ";
        cout<<"2.000000000 2.000000000"<<endl;
        return;
    }
    cout<<"Y ";
    double a=(d+sqrt(d*d-4*d))/2;
    double b=(d-sqrt(d*d-4*d))/2;
    cout<<setprecision(9)<<fixed<<a<<" "<<b;
    cout<<endl;


}

signed main() {
    // MIR183_PC;
    // Always use ll, int may give TLE
    ll t;
    cin >> t;
    // t=1;
    while (t--) {
        solve();
    }
    return 0;
}