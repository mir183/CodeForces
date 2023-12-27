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
    // Always use ll(long long int), int may give TLE
    ll t;
    cin >> t;
    while(t--){
        string s,z;
        cin >> s;
        cin >> z;
        reverse(s.begin(), s.end());
        reverse(z.begin(), z.end());
        map<char, ll> mp;
        for(auto i:z){
            mp[i]++;
        }
        string result;
        for(auto i:s){
            if(mp[i] > 0){
                // result += i;
                mp[i]--;
                result.push_back(i);
            }
        }
        if(result==z){
            yes;
        }
        else{
            no;
        }
    }
    return 0;
}