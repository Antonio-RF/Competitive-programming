#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

	long long n;
	cin >> n;

	vector<long long> v(n);

	long long count = 0;
	cin >> v[0];
	for (int i=1 ; i<n ; i++) {
		cin >> v[i];
		if (v[i] < v[i-1]) {
			count += v[i-1] - v[i];
			v[i] = v[i-1];
		}
	}

	cout << count << endl;
    return 0;
}


