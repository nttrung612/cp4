#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define FOR(i,a,b) for(int i=(a);i<=(b);++i)
const int maxN = 3e5+5;

int n, a[maxN];

void solve() {
    cin >> n;
    for(int i=0;i<n;++i) cin>>a[i];
    int cnt = 1;
    for(int i=1;i<n;++i) {
        if(a[i]==a[i-1]) ++cnt;
    }
    if(cnt == n) {
        cout << "-1\n";
        return;
    }
    int cur = 0, ans = n;
    for(int i=0;i<n;++i) {
        if(a[i] == a[0]) {
            ++cur;
        } else {
            ans = min(ans, cur);
            cur = 0;
        }
    }
    ans = min(ans, cur);
    cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t=1; cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}