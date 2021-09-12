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

    int n;
    cin >> n;

    int mx = INT_MIN;
    int mn = INT_MAX;
    int maxe = INT_MIN;
    int mine = INT_MAX;
    int temp;
    for (int i = 0; i < n; i++) {
        cin>>temp;
        if (temp > maxe) {
            maxe = temp;
            mx = i;
        }
        if (temp <= mine) {
            mine = temp;
            mn = i;
        }
    }
    if (mx > mn) {
        cout<<mx+n-mn-2;
    } else {
        cout<<mx+n-mn-1;
    }

    return 0;
}
