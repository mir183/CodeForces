#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define fasterio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

int main() {
    fasterio;
    // Your code here
    // Always use ll, int may give TLE
    ll t;
    cin>>t;
    while (t--)
    {
        ll n;
        cin>>n;
        vector<ll>a(n),b(n);
        for(auto &i:a)cin>>i;
        for(auto &i:b)cin>>i;
        vector<pair<ll,ll>>ans;

        for(ll i=0;i<n;i++){
            for(ll j=0;j<n-1;j++)
            {if(a[j]>a[j+1] or b[j]>b[j+1]){
                swap(a[j],a[j+1]);
                swap(b[j],b[j+1]);
                ans.push_back({j+1,j+2});
            }}
        }
        ll ok =0;
        for(ll i=0;i<n-1;i++){
            if(a[i]>a[i+1] or b[i]>b[i+1]){
                ok=-1;
                break;
            }
        }
        // cout<<"ANS: ";
        if(ok!=0)cout<<-1<<endl;
        else{
            ll x=ans.size();
            cout<<x<<endl;
            for(ll i=0;i<x;i++){
                cout<<ans[i].first<<" "<<ans[i].second<<endl;
            }
        }
    }
    
    
    return 0;
}