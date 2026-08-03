#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;

    vector<long long> x(n);
    for (auto &v : x) cin >> v;

    ostringstream out;

    while (q--) {
        long long p;
        cin >> p;

        // idx = quantidade de cubos originais com posição menor que p
        int idx = lower_bound(x.begin(), x.end(), p) - x.begin();
        int left = idx, right = n - idx;

        long long ans = LLONG_MAX;

        // dois cubos mais próximos à esquerda de p
        if (left >= 2) ans = min(ans, p - x[idx - 2]);

        // dois cubos mais próximos à direita de p
        if (right >= 2) ans = min(ans, x[idx + 1] - p);

        // um cubo de cada lado (vizinhos imediatos)
        if (left >= 1 && right >= 1) ans = min(ans, x[idx] - x[idx - 1]);

        out << ans << '\n';
    }

    cout << out.str();
    return 0;
}