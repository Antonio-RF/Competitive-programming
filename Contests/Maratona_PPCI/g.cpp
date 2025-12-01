#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define pb push_back
#define MAXIMO LLONG_MAX
#define MINIMO LLONG_MIN
typedef long long ll;

const int INF = 0X3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3f;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, k; cin >> n >> k;
    ll a; cin >> a;
    vector<ll> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];

    sort(v.begin(), v.end());
    ll total = 0;
    for (int i = 0; i < k; i++) total += v[i];
    if (total <= a) cout << total << "\n";
    else cout << "Nao e possivel\n";
}