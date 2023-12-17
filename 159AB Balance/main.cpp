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
        int ab = 0, ba = 0;
        cin >> s;
        for (int i = 0; i < s.size() - 1; i++)
        {
            if (s[i] == 'a' && s[i + 1] == 'b')
            {
                ab++;
            }
            else if (s[i] == 'b' && s[i + 1] == 'b')
            {
                ba++;
            }
        }
        if(ab==ba){
            cout << s << endl;
        }else if(ab>ba){
            s[0] = 'b';
            cout << s << endl;
        }else{
            s[0] = 'a';
            cout << s << endl;
        }

    }
    
    return 0;
}