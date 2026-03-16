#include "bits/stdc++.h"

using namespace std;
using ll = long long;

int main()
{
    cin.tie(0)->sync_with_stdio(0);

    int n;
    cin >> n;
    set<int> s;

    for (int i = 0; i < n; i ++) {
        int k;
        cin >> k;
        s.insert(k);
    }

    int current = 1;
    int prev = 0;
    for (int x : s) {
        if (x - prev > 1)
            break;
        else {
            current = current ^ 1;
        }
        prev = x;
    }

    if (current == 1)
        cout << "Alicius\n";
    else
        cout << "Bobius\n";

}
