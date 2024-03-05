#include <iostream>
#include <vector>
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
    vector<ll> v(n);
    int t25=0;
    int fifty=0;
    for(ll i=0;i<n;i++){
        cin>>v[i];
        if(v[i]==25){
            t25++;
        }else if(v[i]==50){
            if(t25==0){
                no;
                return 0;
            }
            t25--;
            fifty++;
        }else{
            if(fifty>0 && t25>0){
                fifty--;
                t25--;
            }else if(t25>=3){
                t25-=3;
            }else{
                no;
                return 0;
            }
        }
    }
    yes;
    return 0;
}