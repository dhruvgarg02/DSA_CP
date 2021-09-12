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

    string a, b;
    cin>>a>>b;

    for (int i = 0; i < a.length(); i++) {
        if (a[i] == b[i]) a[i] = '0';
        else a[i] = '1';
    }
    cout<<a;
    return 0;
}
