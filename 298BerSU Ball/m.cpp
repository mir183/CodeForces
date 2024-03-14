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
    ll n;
    cin>>n;

    vector<ll>b(n);
    for(auto &i:b)cin>>i;
    ll m;
    cin>>m;
    vector<ll>g(m);
    for(auto &i:g)cin>>i;
    ll ans=0;
    sort(b.begin(),b.end());
    sort(g.begin(),g.end());
    // for(auto it=b.begin();it!=b.end();it++){
    //     ll x=(*it);
    //     for(auto i:g){
    //         if(i==x-1){
    //             ans++;
    //             g.erase(find(g.begin(),g.end(),i+1));
    //         } else if(i+1==x){
    //             ans++;
    //             g.erase(find(g.begin(),g.end(), i));
    //         }else{
    //             continue;
    //         }
    //     }
    // }

    ll i=0,j=0;
    while(i<n and j<m){
        if(abs(b[i]-g[j])<=1){
            ans++;
            i++;
            j++;
        }else if(b[i]>g[j]){
            j++;
        }else{
            i++;
        }
    }
    cout<<ans<<endl;
    return 0;
}