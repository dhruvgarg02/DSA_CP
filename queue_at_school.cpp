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

    int n, x;
    cin>>n>>x;
    string s;
    cin >> s;

    while(x--) {
        for (int i = 1; i < n; i++) {
            if (s[i] == 'G' and s[i-1] == 'B') {
                swap(s[i], s[i-1]);
                i++;
            }
        }
    }

    cout << s;

    return 0;
}
