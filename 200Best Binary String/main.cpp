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
    ll t;
    cin>>t;
    while (t--)
    {
        string s;
        cin>>s;
        char a='0';
        for(ll i=0;i<s.size();i++){
            if(s[i]=='?'){
                s[i]=a;
            }else{
                a=s[i];
            }
        }
        cout<<s<<endl;
    }
    
    return 0;
}