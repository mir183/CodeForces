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

    while (t--) {
        string p;
        cin>>p;
        char column=p[0];
        char row=p[1];
        vector<string>moves;

        for (char c='a';c<='h';c++) {
            if (c!=column){
                moves.push_back(string(1,c)+row);
            }
        }
        for (char r='1';r<='8';r++) {
            if (r!=row){
                moves.push_back(column+string(1,r));
            }
        }
        moves.erase(remove(moves.begin(), moves.end(), p), moves.end());
        for(auto x:moves){
            cout<<x<<endl;
        }
    }

    return 0;
}
