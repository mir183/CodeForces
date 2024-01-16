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
    bool allcaps=true;
    for(ll i=1;i<s.size();i++){
        if(s[i]>=97){
            allcaps=false;
            break;
        }
    }

    if(allcaps){
        for(ll i=0;i<s.size();i++){
            if(s[i]>=97){
                s[i]-=32;
            }else{
                s[i]+=32;
            }
        }
        cout<<s<<endl;
    }
    else{
        cout<<s<<endl;
    }

    return 0;
}