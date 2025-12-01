#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define pb push_back
#define MAXIMO LLONG_MAX
#define MINIMO LLONG_MIN
typedef long long ll;

int main() {
    int n;
    cin >> n;
    char matriz[n+1][n+1];

    int x = n+2, y = 0;
    for (int i = 1; i<= n; i++)
        for (int j = 1; j <= n; j++) {
            char c; cin >> c;
            if (c == '#') {
                if (i <= x && j > y) {
                    x = i; y = j;
                }
            }
        }
    cout << "(" << x << ", " << y << ")\n";
}