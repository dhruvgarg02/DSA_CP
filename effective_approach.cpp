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
    int arr[100001];
    int temp;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        arr[temp] = i;
    }
    int m;
    cin >> m;
    ll c1 = 0, c2 = 0;
    for (int i = 0; i < m; i++) {
        cin >> temp;
        c1 += arr[temp]+1;
        c2 += n-arr[temp];
    }
    cout << c1 << " " << c2;
    return 0;
}
