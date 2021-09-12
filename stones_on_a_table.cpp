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
    int n; cin >> n;
    string s;
    cin >> s;
    char curr = '0';
    int res = 0;
    for (char i : s) {
        if (i == curr) res++;
        else curr = i;
    }
    cout<<res;
    return 0;
}
