#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("Input.txt","r",stdin);
    freopen("Output.txt","w",stdout);
    #endif

    string s;
    cin>>s;

    int n = s.size();
    for (int i = 0; i < n; i++) {
        if (i < n-1 and s[i] == '-' and s[i+1] == '-') {
            cout<<2;
            i++;
        }
        else if (i < n-1 and s[i] == '-' and s[i+1] == '.') {
            cout<<1;
            i++;
        }
        else cout<<0;
    }

    return 0;
}
