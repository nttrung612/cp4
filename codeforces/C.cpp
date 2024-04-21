#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define FOR(i,a,b) for(int i=(a);i<=(b);++i)

void solve() {
    string x, y;
    cin >> x >> y;
    int n = x.length();
    bool f = false;
    for(int i=0;i<n;++i) {
        if((x[i] > y[i]) == f) swap(x[i], y[i]);
        f |= (x[i] != y[i]);
    }
    cout << x << '\n' << y << '\n';
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t=1; cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}