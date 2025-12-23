#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define pb push_back
typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

void solution() {
	int n;
	cin >> n;
	vector<pair<int, bool>> v(n);

	for (int i=0 ; i<n ; i++) {
		int k;
		cin >> k;
		v[i].first = k;
		v[i].second = true;
	}

	for (int i=0 ; i<n ; i++) {
		if (v[i].second == false) continue;
		for (int j=i+1 ; j<n ; j++) {
			if (v[j].first < v[i].first)
				v[j].second = false;
		}
	}

	ll count =0;
	for (int i=0 ; i<n; i++) {
		if (v[i].second == false) count++;
	}
	cout << count << endl;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int t;
	cin >> t;
	while(t--)
		solution();

	return 0;
}

