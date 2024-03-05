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
    string s[6]={"Sheldon","Leonard","Penny","Rajesh","Howard"};
    ll n;
    cin>>n;
    // n%=5;
    ll cnt=1;
    while (n>cnt*5)
    {   
        n-=cnt*5;
        cnt*=2;
    }
    cout<<s[(n-1)/cnt];
    
    return 0;
}