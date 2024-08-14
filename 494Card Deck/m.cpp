#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,i,mx,j,x;
        cin >> n;
        vector <int> vec1,vec2,vec3(n+5,0);

        mx=n;

        for(i=0;i<n;i++)
        {
            cin >> x;
            vec1.push_back(x);
        }

        for(i=n-1;i>=0;i--)
        {
            vec2.push_back(vec1[i]);
            if(vec1[i]==mx)
            {
                for(j=vec2.size()-1;j>=0;j--)
                {
                    cout << vec2[j] << " ";
                    vec3[vec2[j]]=1;
                }
                vec2.clear();
                while(vec3[mx]  && mx>0)
                {
                    mx--;
                }
            }
        }
        cout << endl;
    }
    return 0;
}