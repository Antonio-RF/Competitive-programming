#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

	int t;
	cin >> t;
	while(t--) {
		int a, b;
		cin >> a >> b;
		if (a<b) {
			cout << a << " " << b << endl;
		}
		else{
			cout << b << " " << a << endl;
		}
	}


    return 0;
}


