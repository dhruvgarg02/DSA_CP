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

    int a[3][3];
    int i = 0, j = 0;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            cin >> a[i][j];
        }
    }

    vector<vector<int>> res(3, vector<int> (3, 0));
    int temp = 0;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            temp = 0;
            temp += a[i][j];
            if (i > 0) temp += a[i-1][j];
            if (j > 0) temp += a[i][j-1];
            if (i < 2) temp += a[i+1][j];
            if (j < 2) temp += a[i][j+1];
            if (temp%2 == 0) res[i][j] = 1;
            cout<<res[i][j];
        }
        cout<<endl;
    }

    return 0;
}
