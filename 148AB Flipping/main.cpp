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
        int n;
        cin >> n;
        string s;
        cin >> s;
        int cnt = n-1;
        for(int i = 0; i < n; i++)
        {
            if(s[i] == 'B')
            {
                cnt--;
            }
            else
            {
                break;
            }
        }
        for(int i=s.size()-1; i>=0; i--)
        {
            if(s[i]=='A')
            {cnt--;
            }
            else
            {
                break;
            }
        }
        if(cnt<0)
        {
            cout<<0<<endl;
        }
        else
        {
            cout<<cnt<<endl;
        }

    }
    
    return 0;
}