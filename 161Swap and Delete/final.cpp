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
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int zero = 0, one = 0;
        for (int i = 0; i < s.size(); ++i)
        {
            if (s[i] == '0')
                zero++;
            if (s[i] == '1')
                one++;
        }
        for(int i=0;i<s.size();i++){
            if(s[i]=='0'){
                if(one>0){
                    one--;
                } else break;
            }
            else{
                if(zero>0){
                    zero--;
                }
                else break;
            }
        }
        cout<<one+zero<<endl;
    }
    
    
    return 0;
}