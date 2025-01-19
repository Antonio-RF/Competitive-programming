#include <bits/stdc++.h>
using namespace std;
 
 
#define endl '\n'
#define pb push_back
typedef long long ll;
 
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
 
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	ll qntd;
    cin >> qntd;
    while(qntd--) {
		ll n, m;
        cin >> n >> m;

        vector<vector<char>> matriz(n, vector<char>(m));
        ll count_i = 0;
        ll count_j = 0;
        ll count_qntd = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> matriz[i][j];
                if (matriz[i][j] == '#') {
                    count_i += i + 1;
                    count_j += j + 1;
                    count_qntd++;
                }
            }
        }

        ll resultado_i = count_i / count_qntd;
        ll resultado_j = count_j / count_qntd;
        cout << resultado_i << " " << resultado_j << endl;
    }

    return 0;
	
}

