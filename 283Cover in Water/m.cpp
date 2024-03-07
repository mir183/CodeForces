#include <iostream>
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
        string s;
        cin>>s;
        ll ans=0,cnt=0;
        for(auto i:s){
            if(i=='.'){
                ans++;
                cnt++;
            }else{
                cnt=0;
            }
            if(cnt>=3){
                break;
            }
        }
        if(cnt>=3)cout<<2<<endl;
        else cout<<ans<<endl;
    }
    
    return 0;
}