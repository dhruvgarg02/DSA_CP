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

    if (n&1) {
        cout<<-1;
        return 0;
    }

    for (int i = 1; i <= n; i++) {
        if (i&1) cout<<i+1<<" ";
        else cout<<i-1<<" ";
    }

    return 0;
}
