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
    string a,b;
    cin>>a>>b;
    ll ax=count(a.begin(),a.end(),'X');
    ll bx=count(b.begin(),b.end(),'X');
    char al=a[a.size()-1];
    char bl=b[b.size()-1];
    if(al==bl){
        if(al=='S'){
            if(ax>bx)cout<<"<"<<endl;
            else if(ax<bx)cout<<">"<<endl;
            else cout<<"="<<endl;
        }else if(al=='L'){
            if(ax>bx)cout<<">"<<endl;
            else if(ax<bx)cout<<"<"<<endl;
            else cout<<"="<<endl;
        } else cout<<"="<<endl;
    }else{
        if(al=='M'){
            if(bl=='S') {
                cout<<">"<<endl;
            }else{
                cout<<"<"<<endl;
            }
        }
        else if(al=='S')cout<<"<"<<endl;
        else cout<<">"<<endl;
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