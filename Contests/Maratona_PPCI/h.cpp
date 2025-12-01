#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define pb push_back
#define MAXIMO LLONG_MAX
#define MINIMO LLONG_MIN
typedef long long ll;

const int INF = 0X3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3f;

void solution() {

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, m;
    cin >> n >> m;
    ll dp[n+1][m+1];
    vector<pair<int, int>> amuletos(n);
    for (int i = 0; i < n; i++) {
        int c, p;
        cin >> c >> p;
        amuletos[i] = {p, c};
    }
    sort(amuletos.begin(), amuletos.end());

    ll res = 0;

    for (int j = 0; j <= m; j++)
        if (amuletos[n-1].second <= j) dp[n-1][j] = amuletos[n-1].first;
        else dp[n-1][j] = 0;

    for (int i = n-2; i >= 0; i--) {
        for (int j = 0; j <= m; j++) {
            if (amuletos[i].second > j) {
                dp[i][j] = dp[i+1][j];
            }
            else {
                dp[i][j] = max(dp[i+1][j], amuletos[i].first + dp[i+1][j-amuletos[i].second]);
            }
        }
    }

    //cout << dp[0][m] << "\n";

    ll atual = m;
    ll melhor = 0;
    for (int i = n-1; i > 0; i--) {
        if (amuletos[i].second <= atual) {
            //cout << "i = " << i << " " << dp[i][atual] << " " << dp[i-1][atual] << "\n";
            if (dp[i][atual] <= dp[i-1][atual]) {
                melhor = amuletos[i].first;
                break;
            }
            atual -= amuletos[i].second;
        }
        else {
            //cout << "i = " << i << "\n";
            melhor = amuletos[i].first;
            break;
        }
    }
    cout << dp[0][m] + melhor << "\n";
}