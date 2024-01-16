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
    string s;
    cin>>s;
    s[0]=toupper(s[0]);

    for(ll i=1;i<s.size();i++){
        s[i]=tolower(s[i]);
    }
    cout<<s<<endl;
    return 0;
}