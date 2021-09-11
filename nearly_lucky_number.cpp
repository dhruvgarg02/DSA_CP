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

    ll n;
    cin >> n;
    int count = 0;
    while(n > 0) {
        if (n%10==4 || n%10==7) {
            count++;
        }
        n /= 10;
    }
    if (count == 4 or count == 7)
        cout<<"YES";
    else
        cout << "NO";
    return 0;
}
