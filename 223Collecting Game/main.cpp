#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> v(n);
        for (int i = 0; i < n; ++i) {
            cin >> v[i];
        }

        for(int i=0;i<n;i++){
            int score = v[i];
            vector<int> v2 = v;
            sort(v2.begin(), v2.end());
            //check how many higher values which is gerater than score
            int count = 0;
            for(int j=0;j<n;j++){
                if(v2[j] > score){
                    count++;
                }
            }
            cout << count << " ";
        }
    }

    return 0;
}
