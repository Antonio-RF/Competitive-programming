#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define pb push_back
typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

void solution() {
	ll n, q;
	cin >> n >> q;

	vector<pair<string, int>> note(n);
	for (int i=0 ; i<n ; i++)
		cin >> note[i].first >> note[i].second;
	vector<int> v(n, 0);
	vector<bool> punido(n, false);


	ll count = 0;
	vector<string> resp;
	for (int i=0 ; i<q ; i++) {
		string temp;
		int temp2;
		cin >> temp >> temp2;

		for (int j=0 ; j<n ; j++) {
			if (temp == note[j].first) {
				if (v[j] < 3 && temp2 <= note[j].second)
					punido[j] = true;
				else
					v[j]++;
				break;
			}
		}
	}
	for (int i=0 ; i<n ; i++) {
		if (punido[i]) resp.pb(note[i].first);
	}
	if (resp.empty()) cout << -1 << endl;
	else {
		cout << resp.size() << endl;
		for (auto &i : resp) cout << i << endl;
	}


}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	solution();

	return 0;
}

