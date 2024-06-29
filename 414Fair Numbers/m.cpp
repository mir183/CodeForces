#include <iostream>
#include<vector>
#include<string>
#include<set>
#include<map>

using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define MIR183_Mac ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl


// map<ll,bool>mp;

// bool isfar(ll n){

//     string s=to_string(n);
//     // vector<ll>dig;
//     // vector<ll>nd;
//     for(ll i=0;i<s.size();i++){
//         if(s[i]=='0'){
//             continue;
//         }else{
//             ll x=stoll(string(1,s[i]));
//             if(n%x!=0) return false;
//         }

//     }

//     // cout<<"DIGITS: ";
//     // for(auto i:dig){
//     //     cout<<i<<" ";
//     // }
//     // set<ll>st(dig.begin(),dig.end());
//     // dig.clear();
//     // dig.assign(st.begin(),st.end());


//     // bool dvALL=true;
//     // for(ll i=0;i<dig.size();i++){
//     //     if(n%dig[i]==0){
//     //         dvALL=true;
//     //         // continue;
//     //     }
//     //     else if(n%dig[i]!=0){
//     //         dvALL=false;
//     //         // break;
//     //         nd.push_back(dig[i]);
//     //     }
//     // }
//     // mp[n]=true;

//     return true;

// }

ll ok(ll n){
    while(true){
    
    ll n1=n;
        while (n1>0)
        {
            ll rem=n1%10;
            if(rem!=0 and n%rem!=0){
                break;
            }
            n1=n1/10;
        }
        if(n1==0){
            return n;
            }
        n++;
    }
}


void solve() {
    // Your code here
    ll n;
    cin>>n;
    ll ans=ok(n);
    
    cout<<ans<<endl;
    
    






}

signed main() {
    MIR183_Mac;
    // Always use ll, int may give TLE
    ll t;
    cin >> t;
    // t=1;
    while (t--) {
        solve();
    }
    return 0;
}