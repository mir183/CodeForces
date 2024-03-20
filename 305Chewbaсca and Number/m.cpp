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
    string s;
    cin>>s;
    for(ll i=0;i<s.size();i++){
        if(s[i]>'4')s[i]='9'-s[i]+'0';

    }
    if(s[0]=='0')s[0]='9';
    cout<<s<<endl;
    return 0;
}