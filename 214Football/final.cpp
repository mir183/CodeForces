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
    ll n;
    cin>>n;
    map<char,ll>mp;
    string ms;
    while(n--){
        string s;
        cin>>s;
        ms.append(s);
    }
    for(ll i=0;i<ms.size();i++){
        if (ms[i] >= 'A' && ms[i] <= 'Z'){
                mp[ms[i]]++;
            }
        }

    char maxchar='\0';
    ll maxcharCNT=0;
    set<char>taken;
    for (auto it : mp) {
    // cout << it.first << ": " << it.second << endl;
    if(it.second>maxcharCNT){
        maxcharCNT=it.second;
        maxchar=it.first;
        }
    }
    for(auto it:mp){
            if(it.second==maxcharCNT){
                cout<<it.first;
            }
        }
        



    return 0;
}