//#include<bits/stdc++.h> // Uncomment while submitting
#include <iostream>
#include <deque>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;

#define ll long long int
#define ld long double
#define endl '\n'
#define MIR183_Mac ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define yes cout << "YES" << endl
#define no cout << "NO" << endl;


vector<pair<int, int>> ans;
vector<int> v[100005];
map<pair<int, int>, int> mp;
int vis[100005];

void dfs(int node, int col) {
    vis[node] = 1;
    for (int child : v[node]) {
        if (vis[child] == 0) {
            int x = min(child, node);
            int y = max(child, node);
            int edgeColor;
            if (col == -1 || col == 2) edgeColor = 5;
            else edgeColor = 2;
            col = edgeColor;
            mp[{x, y}] = edgeColor;
            dfs(child, col);
        }
    }
}

void solve() {
    int n;
    cin >> n;
    int cnt = 0;
    ans.clear();
    mp.clear();
    for (int i = 1; i <= n; i++) {
        vis[i] = 0;
        v[i].clear();
    }
    for (int i = 1; i < n; i++) {
        int a, b;
        cin >> a >> b;

        int x = min(a, b);
        int y = max(a, b);
        ans.push_back({x, y});

        v[a].push_back(b);
        v[b].push_back(a);

        if (v[a].size() > 2) cnt = 1;
        if (v[b].size() > 2) cnt = 1;
    }
    if (cnt == 1) {
        cout << -1 << endl;
    } else {
        dfs(1, -1);
        for (int i = 0; i < ans.size(); i++) {
            int x = ans[i].first;
            int y = ans[i].second;
            cout << mp[{x, y}] << " ";
        }
        cout << endl;
    }
}

signed main() {
    MIR183_Mac;
    ll tt;
    cin >> tt;
    while (tt--) {
        solve();
    }
    return 0;
}