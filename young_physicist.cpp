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

    int t;
    cin>>t;
    int x = 0, y = 0, z = 0;
    while(t--) {
        int a, b, c;
        cin>>a>>b>>c;
        x += a; y += b; z += c;
    }
    if (x == 0 and y == 0 and z == 0) cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}
