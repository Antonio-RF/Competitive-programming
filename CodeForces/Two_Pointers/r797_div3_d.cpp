#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define pb push_back
typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

void solution() {

	int n,k;
	cin >> n >> k;

	vector<char> v(n);
	for (char &i: v)
		cin >> i;

	//Sliding Window:
	ll ans = k, cnt = 0, l = 0;
	for (int p=0 ; p<n ; p++) {

		if (v[p] == 'W')
			cnt++;

		while (p - l + 1 > k) {
			if (v[l] == 'W')
				cnt--;
			l++;
		}

		if (p - l + 1 == k)
			ans = min(ans, cnt);
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

