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
    if(n%2){
        cout<<-1<<endl;
        return;
    }
    ll o=count(s.begin(),s.end(),'(');
    ll c=count(s.begin(),s.end(),')');
    if(o!=c){
        cout<<-1<<endl;
        return;
    }
    ll top=0,ans=0,si=0;
    for(ll i=0;i<n;i++){
        char c=s[i];
        if(s[i]=='('){
            top++;
            if(top==0){
                ans+=(i-si+1);
            }
        }else if(s[i]==')'){
            top--;
            if(top==-1){
                si=i;
            }
        }

    }
    if(top==0)cout<<ans<<endl;
    else{
        cout<<ans<<endl;
    }


}

signed main() {
    MIR183_PC;
    // Always use ll, int may give TLE
    ll tt;
    tt=1;
    // cin >> tt;
    while (tt--) {
        solve();
    }
    return 0;
}