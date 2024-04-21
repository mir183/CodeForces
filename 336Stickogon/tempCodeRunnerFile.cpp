void solve() {
    ll n;
    cin >> n;
    vector<ll> d(n);
    map<ll,ll> m;
    for(ll i = 0; i < n; i++){
        cin >> d[i];
        m[d[i]]++;
    }

    ll ans = 0;
    // Start from the largest stick length
    for(auto it = m.rbegin(); it != m.rend(); ++it){
        // Add the number of polygons that can be formed with this stick length
        ans += it->second / it->first;
        // If there are remaining sticks, add them to the next smaller stick length
        if(it != m.rend()) {
            auto next_it = next(it);
            next_it->second += it->second % it->first;
        }
    }

    cout << ans << endl;
}