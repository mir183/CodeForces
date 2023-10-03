#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int l, r, a;
        cin >> l >> r >> a;
        long long int x =(r+1)/a*a-1;
        long long int maxv;
        if (l<=x) {
            maxv=x/a+x%a;
        }
        else{
        maxv=r/a+r%a;
            }

        cout <<maxv<< endl;
    }

    return 0;
}
