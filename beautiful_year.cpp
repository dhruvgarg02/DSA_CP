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

    int x; cin>>x;
    int y;
    unordered_set<int> s;

    while (true) {
        x++;
        y = x;
        while (y > 0) {
            int temp = y%10;
            y /= 10;
            s.insert(temp);
        }
        if (s.size() == 4) break;
        s.clear();
    }

    cout<<x;

    return 0;
}
