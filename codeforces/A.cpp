#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define FOR(i,a,b) for(int i=(a);i<=(b);++i)
const int maxN = 1000;

int k, q;
int a[maxN], n[maxN];

void solve() {
    cin >> k >> q;
    FOR(i, 0, k-1) cin >> a[i];
    FOR(i, 0, q-1) cin >> n[i];
    FOR(i, 0, q-1) {
        if(n[i] < a[0]) {
            cout << n[i] << ' ';
        } else {
            cout << a[0] - 1 << ' ';
        }
    }
    cout << '\n';
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t=1; cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}