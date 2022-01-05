#define PROBLEM "https://judge.yosupo.jp/problem/find_linear_recurrence"

#include <bits/stdc++.h>
using namespace std;

#include "../modulo_anta.h"
#include "../LinearRecurrence_BerlekampMassey.h"

using modular = ModInt<998244353>;
std::ostream& operator << (std::ostream& cout, const modular& m) {
    cout << m.x;
    return cout;
}
std::istream& operator >> (std::istream& cin, modular& m) {
    cin >> m.x;
    return cin;
}

int32_t main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int n; cin >> n;
    vector<modular> a(n);
    REP(i,n) cin >> a[i];

    auto c = berlekampMassey<modular>(a);
    cout << SZ(c) << endl;
    for (auto x : c) cout << x << ' ';
    cout << endl;
    return 0;
}