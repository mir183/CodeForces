        not for A add 1 in ans for B add 2 in ans and go on but if it exceed n then break
        for (auto it=st.begin(); it!=st.end(); it++) {
            int cnt=0;
            for (int i=0; i<n; i++) {
                if (s[i]==*it) {
                    cnt++;
                }
            }
            if (cnt>ans) {
                ans=cnt;
            }
        }
        cout << ans << endl;'
    