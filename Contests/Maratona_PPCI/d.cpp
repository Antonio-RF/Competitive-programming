#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define pb push_back
#define MAXIMO LLONG_MAX
#define MINIMO LLONG_MIN
typedef long long ll;

const int INF = 0X3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3f;

ll exp2(ll a) {
    if (a == 0) return 1;
    if (a % 2 == 1) return 2 * exp2(a-1);
    ll temp = exp2(a / 2);
    return temp * temp;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int m, n, l;
    cin >> n >> m >> l;
    vector<ll> f(m+1);
    for (int i = 1; i <= m; i++) cin >> f[i];
    vector<ll> quant(m+1, 0);
    vector<ll> c(n);
    for (int i = 0; i < n; i++) cin >> c[i];

    for (int i = 0; i < l; i++) quant[c[i]]++;

    ll ultima = 0;
    for (int i = 1; i <= m; i++) ultima += (exp2(quant[i]) - 1) * f[i];
    ll best = ultima;
    for (int i = l; i < n; i++) {
        //cout << "fadiga: " << ultima << "\n";
        int rm = c[i - l];
        int add = c[i];
        ultima -= (exp2(quant[rm]) - 1) * f[rm];
        quant[rm]--;
        ultima += (exp2(quant[rm]) - 1) * f[rm];
        
        ultima -= (exp2(quant[add]) - 1) * f[add];
        quant[add]++;
        ultima += (exp2(quant[add]) - 1) * f[add];

        if (ultima < best) best = ultima;
    }
    cout << best << "\n";
}