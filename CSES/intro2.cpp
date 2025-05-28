#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

	long long n;
	cin >> n;
	vector<int> vector(n, 0);

	for (int i=1 ; i<n ; i++) {
		int input;
		cin >> input;
		vector[input] = 1;
	}

	for (int i=1 ; i<n+1 ; i++) {
		if (vector[i] == 0) {
			cout << i << endl;
			break;
		}
	}

    return 0;
}


