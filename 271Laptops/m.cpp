#include <iostream>
#include<map>
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
    map<ll,ll>m;
    for(ll i=0;i<n;i++){
        ll x,y;
        cin>>x>>y;
        m.insert({x,y});
    }
    bool alx=false;
    for(auto i:m){
        if(i.first<i.second){
            alx=true;
        }
    }
    if(alx){
        cout<<"Happy Alex"<<endl;
    }else{
        cout<<"Poor Alex"<<endl;
    }
    return 0;
}