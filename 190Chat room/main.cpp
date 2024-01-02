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
    string s;
    cin >> s;
    string ans = "hello";
    for(ll i=0;i<s.size();i++){
        if(s[i] == ans[0]){
            ans.erase(ans.begin());
        }
    }

    if(ans.size() == 0){
        yes;
    }
    else{
        no;
    }
    return 0;
}