void solve() {
    string a,b;
    cin >> a >> b;
    bool flag = false;
    for(ll i=0; i<a.size()-1; i++){ // stop one index before the last one
        if((a[i]=='0' and  b[i]=='0') and (a[i+1]=='1' and b[i+1]=='1') )
        {
            flag = true;
            break;
        }
    }
    if(flag){
        yes;
    }
    else{
        no;
    }
    cout << endl;
}