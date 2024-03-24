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
    // Your code here
    // Always use ll, int may give TLE
    ll t;cin>>t;
    while(t--){ ll a,b;
    cin>>a>>b;
    ll ans=0;
    while (a>0 and b>0)
    {
        if(a>b){
            a-=2;
            b--;
            if(a<0)break;
            ans++;
        }else{
            b-=2;
            a--;
            if(b<0)break;
            ans++;
        }
    }
    cout<<ans<<endl;}
    
    return 0;
}