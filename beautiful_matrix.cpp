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

    int temp;
    int i, j;
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            cin>>temp;
            if (temp == 1) break;
        }
        if (temp == 1) break;
    }

    cout << abs(2-i)+abs(2-j);

    return 0;
}
