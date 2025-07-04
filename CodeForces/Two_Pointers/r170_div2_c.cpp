#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define pb push_back
typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

void solution() {
	int n, k;
	cin >> n >> k;

	//lendo e colocando no vetor:
	vector <int> vn(n);
	for (int i=0 ; i<n ; i++)
		cin >> vn[i];

	//preenchendo o vetor das frequencias;
	map<int, int> vf;
	for (int i=0 ; i<n ; i++) {
		vf[vn[i]]++;
	}

	vector <pair<int, int>> freq;
	for (auto [x,f] : vf)
		freq.pb({x, f});

	//sliding window:
	int ans = 0, cnt = 0;
	int l = 0;
	for (int p=0 ; p< freq.size() ; p++) {
		if (p > 0 && freq[p].first != freq[p-1].first+1) {
			l = p;
			cnt = 0;
		}

		cnt += freq[p].second;
		while (p - l + 1 > k) {
			cnt -= freq[l].second;
			l++;
		}
		ans = max(ans, cnt);
	}

	cout << ans << endl;
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

