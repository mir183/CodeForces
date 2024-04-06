void solve() {
    // Your code here
    ll n,s;
    cin>>n>>s;
    deque<ll>v(n+1),p(n+1);
    for(ll i=1;i<=n;i++){
        ll x;
        cin>>x;
        v.push_back(x);
    }
    p[0]=0;
    for(ll i=1;i<=n;i++){
        p[i]=p[i-1]+v[i];
    }
    ll ans=1e10;
    if(p[n]<s){
        cout<<-1<<endl;
        return;
    }

    for(ll i=1;i<=n;i++){
        ll k=p[i-1]+s;
        if(p[n]<k){
            continue;
        }else{
            auto it=upper_bound(p.begin(),p.end(),k);
            it--;
            ll d=(it-p.begin());
            ans=min(ans,n-(d-i+1));
        }
    }
    cout<<ans<<endl;

}