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
    while(n--){
        string s;
        cin>>s;
        transform(s.begin(),s.end(), s.begin(),::toupper);
        set<char> printedChars;
        // transform(s.begin(), s.end(), s.begin(), ::toupper);
        for(ll i=0;i<s.size();i++){
            if (s[i] >= 'A' && s[i] <= 'Z'){
                mp[s[i]]++;
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
                taken.insert(it.first);
            }
        }
        set<char> printedChars;
        for(auto i:taken){
            for(auto j:printedChars){
                if(i==j){
                    continue;
                }else{
                    printedChars.insert(j);
                }
            }
        }

        for(auto i:printedChars){
            cout<<i;
        }

    }

    return 0;
}