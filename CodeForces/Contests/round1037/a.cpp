#include <bits/stdc++.h>
using namespace std;

#define ll long long
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		
        ll menor = 9;
        while(n>0) {
            ll temp = n%10;
            menor = min(menor, temp);
            n /= 10;
        }
        cout << menor << endl;
    }

    return 0;
}
