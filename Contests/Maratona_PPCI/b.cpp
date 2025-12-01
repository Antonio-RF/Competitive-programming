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
    int n;
    cin >> n;
    int size = n;
    for (int i = 0; i < size; i++) {
        int x; cin >> x;
        if (x < 15) n = n;
        else if (x < 20) n--;
        else n -= 2;
    }
    if (n <= 0) cout << "O BRUTO FOI DERROTADO\n";
    else cout << "O BRUTO ESTA VIVO TPK PARA O GRUPO\n";
}