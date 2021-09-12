#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i*i <= n; i++) {
        if (n%i == 0) return false;
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("Input.txt","r",stdin);
    freopen("Output.txt","w",stdout);
    #endif

    int n, m;
    cin >> n >> m;
    bool flag = 0;

    int i = n+1;
    for (i = n+1; i <= m; i++){
        if (isPrime(i)) {
            flag = 1;
            break;
        };
    }

    if (flag == 1 and i == m) cout<<"YES\n";
    else cout<<"NO\n";

    return 0;
}
