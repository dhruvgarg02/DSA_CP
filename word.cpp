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

    string s;
    cin>>s;

    int cap = 0, small = 0;
    for (char i : s) {
        if (i >= 96) small++;
        else cap++;
    }
    
    bool flag = 0;
    if (s.size() / 2 < cap) flag = 1;
    if (flag)
        for (auto & c: s) c = toupper(c);
    else
        for (auto & c: s) c = tolower(c);
    cout<<s;
    return 0;
}
