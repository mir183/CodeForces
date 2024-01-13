#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        int lb=1;
        int ub = 1e9;
        set<int>excluded;

        for (int i = 0; i < n; ++i) {
            int a,x;
            cin >> a >> x;
            if (a==1) {
                lb=max(lb, x);
            } else if (a==2) {
                ub=min(ub, x);
            } else {
                excluded.insert(x);
            }
        }

        int count=0;
        if (lb <= ub) {
            count = ub - lb + 1;
            for (int x : excluded) {
                if (x >= lb && x <= ub) {
                    count--;
                }
            }
        }

        cout<< count << endl;
    }

    return 0;
}