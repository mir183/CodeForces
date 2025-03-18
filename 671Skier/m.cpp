    #include <bits/stdc++.h>
    using namespace std;

    #define ll long long int
    #define ld long double
    #define endl '\n'
    #define MIR183_PC ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    #define yes cout << "YES" << endl
    #define no cout << "NO" << endl

    void solve() {
        // Your code here
        string s;
        cin>>s;
        ll ans=0,x=0,y=0;
        set<pair<ll,ll>>st;
        for(ll i=0;i<s.size();i++){
            ll a=x,b=y;
            if(s[i]=='N')y++;
            else if(s[i]=='S')y--;
            else if(s[i]=='E')x++;
            else if(s[i]=='W')x--;
            if(st.find({x+a,y+b})==st.end()){
                ans+=5;
                st.insert({x+a,y+b});
            }else{
                ans++;
            }
        }
        cout<<ans<<endl;
    }

    signed main() {
        MIR183_PC;
        // Always use ll, int may give TLE
        ll tt;
        tt=1;
        cin >> tt;
        while (tt--) {
            solve();
        }
        return 0;
    }
