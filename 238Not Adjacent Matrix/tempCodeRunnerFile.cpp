void solve() {
    cin >> n;
    ll a[n][n];
    ll k=1;
    if(n==1) cout<<1<<endl;
    else if(n==2) cout<<-1<<endl;
    else {
        for(ll i=0; i<n; i++) {
            for(ll j=0; j<n; j++) {
                a[i][j] = k;
                k++;
            }
        }
        //swap all adjacent elements
        for(ll i=0; i<n-1; i++) { // change here, i<n-1 to avoid out of bounds
            for(ll j=0; j<n; j++) {
                if(i%2==0) {
                    swap(a[i][j], a[i+1][j]);
                }
            }
        }
        //print the matrix
        for(ll i=0; i<n; i++) {
            for(ll j=0; j<n; j++) {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }
}