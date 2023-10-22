#include<bits/stdc++.h>

using namespace std;


int main() {
    int t;
    cin >> t;

    while (t--) {
        string pin;
        cin >> pin;
        int a=pin[0]-48;
        int b=pin[1]-48;
        int c=pin[2]-48;
        int d=pin[3]-48;
        if(a==0) a=10;
        if(b==0) b=10;
        if(c==0) c=10;
        if(d==0) d=10;
        int time=abs(1-a)+1;
        time +=abs(a-b)+1;
        time +=abs(b-c)+1;
        time +=abs(c-d)+1;
        cout<<time<<endl;

    }

    return 0;
}
