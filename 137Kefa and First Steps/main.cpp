#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define fasterio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

int main() {
    fasterio;
    ll n;
    cin>>n;
    vector<ll>v(n);
    for(auto &i:v){
        cin>>i;
    }
    if(n==1){
        cout<<"1"<<endl;
        return 0;
    }

    int cnt=1, maaax=0;
    for(ll i=1;i<n;i++){
        if(v[i]>=v[i-1]){
            cnt++;
        }
        else{
            maaax=max(cnt,maaax);
            cnt=1;

        }

    }
            maaax=max(cnt,maaax);
        cout<<maaax<<endl;


    // return 0;
}