#include <iostream>
#include<vector>
#include<map>
#include<numeric>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define fasterio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

bool cmp(const pair<const vector<ll>, ll>& a, const pair<const vector<ll>, ll>& b) {
    return a.second < b.second;
}

int main() {
    fasterio;
    // Your code here
    // Always use ll, int may give TLE
    ll n,k;
    cin>>n>>k;
    vector<ll>v(n);
    for(auto &i:v)cin>>i;

    map<vector<ll>,ll>m;
    for(ll i=0;i<n-k;i++){
        ll ksum=0;
        ksum=accumulate(v.begin()+i,v.begin()+i+k,0);
        m.insert({{v.begin()+i, v.begin()+i+k}, ksum});
    }

    auto mn=*min_element(m.begin(),m.end(),cmp);
    vector<ll>ok;
    for(auto i:mn.first){
        // ok.push_back(i);
        ok = mn.first;
        // cout << ok.size() << endl;
    }
    cout<<ok.size()<<endl;







    return 0;
}